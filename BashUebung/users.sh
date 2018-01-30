#!/bin/bash

function checkUser {

    if [ "$(whoami)" == "$1" ]
    then
        echo "0"
        exit 0
    else
        echo "1"
        exit 1
    fi

}

function logedinUsers {
    IFS='\t'

    who -lu | tail -n 1 | while read line 
    do
        arrIN=($line)
        echo ${arrIN[0]}
    done

    unset IFS
}

function  allUsers {
    IFS=':'

    while read line 
    do
        arrIN=($line)
        echo ${arrIN[0]}
    done < /etc/passwd

    unset IFS
}

case $1 in
    "-l")
        logedinUsers
        ;;
    "-a")
        checkUser $2
        ;;
    *)
        allUsers
        ;;
esac

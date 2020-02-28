
FROM ubuntu:latest

RUN apt-get update -qq

RUN DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends \
    git \
    build-essential \
    cmake \
    clang \
    libc6-compat \
    ca-certificates

ENV \
    CC="/usr/bin/clang" \
    CXX="/usr/bin/clang++"

FROM ubuntu

RUN apt-get update && apt-get install build-essential libmpfr-dev -y

COPY provider.cpp /

RUN g++ provider.cpp -o provider_bin -lgmp

VOLUME /golem/input /golem/work /golem/output
WORKDIR /golem/work
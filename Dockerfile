FROM ubuntu
COPY lab3_1.cpp .
RUN apt-get update
RUN apt-get install -y gcc
RUN apt-get install -y g++
RUN g++ lab3_1.cpp -static
CMD ./a.out

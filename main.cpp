#include <fstream>
#include <std>
#include <string>

namespace main {
    
    string config = {"blockchain": {"maxBlockSize": 0}, "networking": {"maximumConnections": 32, "minimunConnections": 2}, "wallet": {"walletPassword": "", "walletPrivateKeys": [], "walletPublicKeys": []}};
    
    unsigned int blockchain() {
        
        unsigned int createBlock() {
            
            
            
        };
        unsigned int createBlockchain() {
            
            
            
        };
        
    };
    unsigned int console() {
        
        
        
    };
    unsigned int hashing() {
        
        unsigned int scrypt(string datas, unsigned int repetitions, unsigned int x1, unsigned int x2) {
            
            for (repetitions > 0) {
                
                repetitions -= 1;
                datas = hash(datas);
                
            };
            unsigned int hash(string datas) {
                
                
                
            };
            
        };
        unsigned int sha256(string datas) {
            
            
            
        };
        unsigned int sha512(string datas) {
            
            
            
        };
        unsigned int x11(string datas) {
            
            
            
        };
        unsigned int x12(string datas) {
            
            
            
        };
        unsigned int x16r(string datas) {
            
            
            
        };
        unsigned int x16s(string datas) {
            
            
            
        };
        
        unsigned int antiAsics(string datas) {
            
            return (scrypt(sha512(sha256(x16s(x16r(x12(x11(to_string(stoi(datas) * stoi(constants[0]) * stoi(constants[1]) * stoi(constants[3]) * stoi(constants[4]) * stoi(constants[5]) * stoi(constants[6]) * stoi(constants[7])).hexdiggest()).hexdiggest()).hexdiggest()).hexdiggest()).hexdiggest()).hexdiggest()).hexdiggest()).hexdiggest());
            
        };
        
    };
    unsigned int networking() {
        
        unsigned int addPeer(string address, unsigned int port, unsigned int blockchainId) {
            
            
            
        };
        unsigned int connectToPeer(string address, unsigned int port, unsigned int blockchainId) {
            
            
            
        };
        unsigned int findPeers(unsigned int port, unsigned int blockchainId) {
            
            
            
        };
        
        unsigned int changeMinimumConnections(unsigned int number) {
            
            if (number > 1 && number < 16) {
                
                config["networking"["minimumConnections"]] = number;
                return ("true")
                
            } else {
                
                return ("Impossible to get that much peers minimum !")
                
            };
            
        };
        unsigned int changeMaximumConnections(unsigned int number) {
            
            if (number > 1 && number < 1048576) {
                
                config["networking"["maximumConnections"]] = number;
                return ("true")
                
            } else {
                
                return ("Impossible to get the much peers maximum !")
                
            };
            
        };
        
        unsigned int remoteCommandsProtocol() {
            
            
            
        };
        
    };
    unsigned int userInterface() {
        
        
        
    };
    unsigned int wallet() {
        
        unsigned int generatePrivateKey() {
            
            
            
        };
        unsigned int derivatePrivateKey(string datas) {
            
            
            
        };
        
    };
    
};

//
// Created by abhishek on 10/12/16.
//

#ifndef BOOST_EXAMPLES_EXAMPLE_1_H
#define BOOST_EXAMPLES_EXAMPLE_1_H

#include <iostream>
#include <boost/filesystem.hpp>

namespace boostfs = boost::filesystem;

int example_1(int argc, char *argv[])
{
    if (argc <= 1) {
        std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;
    }

    std::shared_ptr<int> a = std::make_shared<int>();

    boostfs::path p(argv[1]);

    if (boostfs::exists(p)) {
        std::cout << "File " << p << " exists." << std::endl;
    } else {
        std::cout << "File " << p << " does not exist." << std::endl;
    }
}

#endif //BOOST_EXAMPLES_EXAMPLE_1_H

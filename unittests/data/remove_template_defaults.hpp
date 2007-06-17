// Copyright 2004 Roman Yakovenko.
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef __remove_template_defaults_hpp__
#define __remove_template_defaults_hpp__

#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <list>
#include <set>

namespace rtd{

namespace vectors{    
    typedef std::vector< int > v_int;
    typedef std::vector< std::string > v_string;
    typedef std::vector< v_int > v_v_int;
}    

namespace lists{
    typedef std::list< int > l_int;
    typedef std::list< std::wstring > l_wstring;
}

namespace deques{    
    typedef std::deque< std::vector< int > > d_v_int;
    typedef std::deque< std::list< std::string > > d_l_string;
}    

namespace queues{
    typedef std::queue< int > q_int;
    typedef std::queue< std::string > q_string;

}

namespace priority_queues{
    typedef std::priority_queue< int > pq_int;
    typedef std::priority_queue< std::string > pq_string;

}

namespace sets{
    typedef std::set< std::vector< int > > s_v_int;
    typedef std::set< std::string > s_string;

}

namespace multiset_sets{
    typedef std::multiset< std::vector< int > > ms_v_int;
    typedef std::multiset< std::string > ms_string;

}

}

#endif//__remove_template_defaults_hpp__
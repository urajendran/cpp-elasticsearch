/*
 * Licensed to cpp-elasticsearch under one or more contributor
 * license agreements. See the NOTICE file distributed with
 * this work for additional information regarding copyright
 * ownership. Elasticsearch licenses this file to you under
 * the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

/*
 * Basic use cpp-elasticsearch library
*/

#include <iostream>

#include "http/http.h"
#include "json/json.h"

int main(int, char**) {

    // Instanciate elasticsearch client.
    HTTP http = HTTP("intranet001:9200", false);

    // Index one document.
    Json::Object jData;
    jData.addMemberByKey("user", "kimchy");
    jData.addMemberByKey("post_date", "2009-11-15T14:12:12");
    jData.addMemberByKey("message", "trying out Elasticsearch");

    
    std::cout << "End of test" << std::endl;

    return EXIT_SUCCESS;
}


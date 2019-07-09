First level heading
============================================

teo-level heading
---------------------------------------------

Four-level heading
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Three-level heading
++++++++++++++++++++++++++++++++++++++++++++++



Json data

.. code-block:: javascript

   {
     update_date_time:'2018-10-8'
    }

Json data saved in the file

.. literalinclude:: _static/jsonfile.js
      :language: javascript

php data

.. code-block:: php
   <?php
   class tool {

       public function sendFileByHttp($appname) {

           $arrDirs = array(
               'editzuoye' => array(
                   'localDir' => '/Users/baidu/Documents/git/editzuoye/',
                   'remoteDir' => "/home/iknow/odp_hyw/app/editzuoye",
               ),
               'praxis' => array(
                   'localDir' => '/Users/baidu/Documents/git/praxis/',
                   'remoteDir' => "/home/iknow/odp_hyw/app/praxis",
               ),
               'papercompare' => array(
                   'localDir' => '/Users/baidu/Documents/git/papercompare/',
                   'remoteDir' => "/home/iknow/odp_hyw/app/editzuoye",
               ),
               'edzyFix' => array(
                   'localDir' => '/Users/baidu/Documents/git/edzyFix/',
                   'remoteDir' => "/home/iknow/odp_hyw/app/editzuoye",
               ),
               'lecturemis' => array(
                   'localDir' => '/Users/baidu/Documents/git/lecturemis/',
                   'remoteDir' => "/home/iknow/odp_cw/app/lecturemis",
               ),
               'tikuresapi' => array(
                   'localDir' => '/Users/baidu/Documents/git/tikuresapi/',
                   'remoteDir' => "/home/iknow/odp_hyw/app/tikuresapi",
               ),

               'bcproduceowapi' => array(
                               'localDir' => '/Users/baidu/Documents/git/bcproduceowapi/',
                               'remoteDir' => "/home/iknow/odp_hyw/app/bcproduceowapi",
                               //'remoteDir' => "/home/iknow/odp_cmq/app/bcproduceowapi",
               ),


           );
      }

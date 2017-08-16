<li>
								<a target="_blank" href="{dede:field.typeurl/}">{dede:field name='typename'/}</a>
								<ol>
          {dede:channel   type ='son' noself='yes'  currentstyle="<li><a href='~typelink~' class='thisclass'>~typename~</a> </li>" }

									<li><a target="_blank" href="[field:typelink/]">[field:typename/]</a></li>
            {/dede:channel}

								</ol>
							</li>
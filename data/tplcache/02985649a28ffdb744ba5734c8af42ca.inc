<div class="col-md-2 col-sm-3 col-xs-6 list masonry-item">
				<h4><a href="list.php?tid={dede:field name='id'/}"  title="{dede:field name='typename'/}">{dede:field name='typename'/}</a></h4>
				<ul>
{dede:channel type='son' row=''}
					<li><a href="list.php?tid=[field:id/]"  title="[field:typename/]">[field:typename/]</a></li>
{/dede:channel}

				</ul>
			</div>
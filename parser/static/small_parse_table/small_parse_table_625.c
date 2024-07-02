/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_625.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3125(t_small_parse_table_array *v)
{
	v->a[62500] = aux_sym_redirected_statement_repeat2;
	v->a[62501] = actions(1898);
	v->a[62502] = 7;
	v->a[62503] = anon_sym_LT;
	v->a[62504] = anon_sym_GT;
	v->a[62505] = anon_sym_GT_GT;
	v->a[62506] = anon_sym_LT_AMP;
	v->a[62507] = anon_sym_GT_AMP;
	v->a[62508] = anon_sym_GT_PIPE;
	v->a[62509] = anon_sym_LT_GT;
	v->a[62510] = actions(2036);
	v->a[62511] = 9;
	v->a[62512] = anon_sym_esac;
	v->a[62513] = anon_sym_PIPE;
	v->a[62514] = anon_sym_SEMI_SEMI;
	v->a[62515] = anon_sym_AMP_AMP;
	v->a[62516] = anon_sym_PIPE_PIPE;
	v->a[62517] = anon_sym_LT_LT;
	v->a[62518] = anon_sym_LT_LT_DASH;
	v->a[62519] = anon_sym_AMP;
	small_parse_table_3126(v);
}

void	small_parse_table_3126(t_small_parse_table_array *v)
{
	v->a[62520] = anon_sym_SEMI;
	v->a[62521] = 6;
	v->a[62522] = actions(3);
	v->a[62523] = 1;
	v->a[62524] = sym_comment;
	v->a[62525] = actions(2038);
	v->a[62526] = 1;
	v->a[62527] = aux_sym_heredoc_redirect_token1;
	v->a[62528] = actions(2191);
	v->a[62529] = 1;
	v->a[62530] = sym_file_descriptor;
	v->a[62531] = state(1160);
	v->a[62532] = 2;
	v->a[62533] = sym_file_redirect;
	v->a[62534] = aux_sym_redirected_statement_repeat2;
	v->a[62535] = actions(1855);
	v->a[62536] = 7;
	v->a[62537] = anon_sym_LT;
	v->a[62538] = anon_sym_GT;
	v->a[62539] = anon_sym_GT_GT;
	small_parse_table_3127(v);
}

void	small_parse_table_3127(t_small_parse_table_array *v)
{
	v->a[62540] = anon_sym_LT_AMP;
	v->a[62541] = anon_sym_GT_AMP;
	v->a[62542] = anon_sym_GT_PIPE;
	v->a[62543] = anon_sym_LT_GT;
	v->a[62544] = actions(2036);
	v->a[62545] = 9;
	v->a[62546] = anon_sym_PIPE;
	v->a[62547] = anon_sym_RPAREN;
	v->a[62548] = anon_sym_SEMI_SEMI;
	v->a[62549] = anon_sym_AMP_AMP;
	v->a[62550] = anon_sym_PIPE_PIPE;
	v->a[62551] = anon_sym_LT_LT;
	v->a[62552] = anon_sym_LT_LT_DASH;
	v->a[62553] = anon_sym_AMP;
	v->a[62554] = anon_sym_SEMI;
	v->a[62555] = 5;
	v->a[62556] = actions(3);
	v->a[62557] = 1;
	v->a[62558] = sym_comment;
	v->a[62559] = actions(2193);
	small_parse_table_3128(v);
}

void	small_parse_table_3128(t_small_parse_table_array *v)
{
	v->a[62560] = 1;
	v->a[62561] = sym_variable_name;
	v->a[62562] = actions(1959);
	v->a[62563] = 2;
	v->a[62564] = sym_file_descriptor;
	v->a[62565] = aux_sym_heredoc_redirect_token1;
	v->a[62566] = state(1159);
	v->a[62567] = 2;
	v->a[62568] = sym_variable_assignment;
	v->a[62569] = aux_sym__variable_assignments_repeat1;
	v->a[62570] = actions(1957);
	v->a[62571] = 15;
	v->a[62572] = anon_sym_PIPE;
	v->a[62573] = anon_sym_SEMI_SEMI;
	v->a[62574] = anon_sym_AMP_AMP;
	v->a[62575] = anon_sym_PIPE_PIPE;
	v->a[62576] = anon_sym_LT;
	v->a[62577] = anon_sym_GT;
	v->a[62578] = anon_sym_GT_GT;
	v->a[62579] = anon_sym_LT_AMP;
	small_parse_table_3129(v);
}

void	small_parse_table_3129(t_small_parse_table_array *v)
{
	v->a[62580] = anon_sym_GT_AMP;
	v->a[62581] = anon_sym_GT_PIPE;
	v->a[62582] = anon_sym_LT_GT;
	v->a[62583] = anon_sym_LT_LT;
	v->a[62584] = anon_sym_LT_LT_DASH;
	v->a[62585] = anon_sym_AMP;
	v->a[62586] = anon_sym_SEMI;
	v->a[62587] = 6;
	v->a[62588] = actions(3);
	v->a[62589] = 1;
	v->a[62590] = sym_comment;
	v->a[62591] = actions(2055);
	v->a[62592] = 1;
	v->a[62593] = aux_sym_heredoc_redirect_token1;
	v->a[62594] = actions(2199);
	v->a[62595] = 1;
	v->a[62596] = sym_file_descriptor;
	v->a[62597] = state(1160);
	v->a[62598] = 2;
	v->a[62599] = sym_file_redirect;
	small_parse_table_3130(v);
}

/* EOF small_parse_table_625.c */

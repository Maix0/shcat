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
	v->a[62500] = state(762);
	v->a[62501] = 1;
	v->a[62502] = sym_terminator;
	v->a[62503] = actions(744);
	v->a[62504] = 2;
	v->a[62505] = anon_sym_LT_LT;
	v->a[62506] = anon_sym_LT_LT_DASH;
	v->a[62507] = actions(955);
	v->a[62508] = 2;
	v->a[62509] = anon_sym_AMP_AMP;
	v->a[62510] = anon_sym_PIPE_PIPE;
	v->a[62511] = actions(1007);
	v->a[62512] = 3;
	v->a[62513] = anon_sym_SEMI_SEMI;
	v->a[62514] = anon_sym_AMP;
	v->a[62515] = anon_sym_SEMI;
	v->a[62516] = state(1194);
	v->a[62517] = 3;
	v->a[62518] = sym_file_redirect;
	v->a[62519] = sym_heredoc_redirect;
	small_parse_table_3126(v);
}

void	small_parse_table_3126(t_small_parse_table_array *v)
{
	v->a[62520] = aux_sym_redirected_statement_repeat1;
	v->a[62521] = actions(1887);
	v->a[62522] = 7;
	v->a[62523] = anon_sym_LT;
	v->a[62524] = anon_sym_GT;
	v->a[62525] = anon_sym_GT_GT;
	v->a[62526] = anon_sym_LT_AMP;
	v->a[62527] = anon_sym_GT_AMP;
	v->a[62528] = anon_sym_GT_PIPE;
	v->a[62529] = anon_sym_LT_GT;
	v->a[62530] = 3;
	v->a[62531] = actions(3);
	v->a[62532] = 1;
	v->a[62533] = sym_comment;
	v->a[62534] = actions(2178);
	v->a[62535] = 3;
	v->a[62536] = sym_file_descriptor;
	v->a[62537] = ts_builtin_sym_end;
	v->a[62538] = aux_sym_heredoc_redirect_token1;
	v->a[62539] = actions(2180);
	small_parse_table_3127(v);
}

void	small_parse_table_3127(t_small_parse_table_array *v)
{
	v->a[62540] = 17;
	v->a[62541] = anon_sym_PIPE;
	v->a[62542] = anon_sym_RPAREN;
	v->a[62543] = anon_sym_SEMI_SEMI;
	v->a[62544] = anon_sym_AMP_AMP;
	v->a[62545] = anon_sym_PIPE_PIPE;
	v->a[62546] = anon_sym_LT;
	v->a[62547] = anon_sym_GT;
	v->a[62548] = anon_sym_GT_GT;
	v->a[62549] = anon_sym_LT_AMP;
	v->a[62550] = anon_sym_GT_AMP;
	v->a[62551] = anon_sym_GT_PIPE;
	v->a[62552] = anon_sym_LT_GT;
	v->a[62553] = anon_sym_LT_LT;
	v->a[62554] = anon_sym_LT_LT_DASH;
	v->a[62555] = anon_sym_AMP;
	v->a[62556] = anon_sym_BQUOTE;
	v->a[62557] = anon_sym_SEMI;
	v->a[62558] = 3;
	v->a[62559] = actions(3);
	small_parse_table_3128(v);
}

void	small_parse_table_3128(t_small_parse_table_array *v)
{
	v->a[62560] = 1;
	v->a[62561] = sym_comment;
	v->a[62562] = actions(2182);
	v->a[62563] = 3;
	v->a[62564] = sym_file_descriptor;
	v->a[62565] = ts_builtin_sym_end;
	v->a[62566] = aux_sym_heredoc_redirect_token1;
	v->a[62567] = actions(2184);
	v->a[62568] = 17;
	v->a[62569] = anon_sym_PIPE;
	v->a[62570] = anon_sym_RPAREN;
	v->a[62571] = anon_sym_SEMI_SEMI;
	v->a[62572] = anon_sym_AMP_AMP;
	v->a[62573] = anon_sym_PIPE_PIPE;
	v->a[62574] = anon_sym_LT;
	v->a[62575] = anon_sym_GT;
	v->a[62576] = anon_sym_GT_GT;
	v->a[62577] = anon_sym_LT_AMP;
	v->a[62578] = anon_sym_GT_AMP;
	v->a[62579] = anon_sym_GT_PIPE;
	small_parse_table_3129(v);
}

void	small_parse_table_3129(t_small_parse_table_array *v)
{
	v->a[62580] = anon_sym_LT_GT;
	v->a[62581] = anon_sym_LT_LT;
	v->a[62582] = anon_sym_LT_LT_DASH;
	v->a[62583] = anon_sym_AMP;
	v->a[62584] = anon_sym_BQUOTE;
	v->a[62585] = anon_sym_SEMI;
	v->a[62586] = 3;
	v->a[62587] = actions(3);
	v->a[62588] = 1;
	v->a[62589] = sym_comment;
	v->a[62590] = actions(2182);
	v->a[62591] = 3;
	v->a[62592] = sym_file_descriptor;
	v->a[62593] = ts_builtin_sym_end;
	v->a[62594] = aux_sym_heredoc_redirect_token1;
	v->a[62595] = actions(2184);
	v->a[62596] = 17;
	v->a[62597] = anon_sym_PIPE;
	v->a[62598] = anon_sym_RPAREN;
	v->a[62599] = anon_sym_SEMI_SEMI;
	small_parse_table_3130(v);
}

/* EOF small_parse_table_625.c */

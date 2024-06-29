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
	v->a[62500] = anon_sym_LT_AMP_DASH;
	v->a[62501] = anon_sym_GT_AMP_DASH;
	v->a[62502] = state(1123);
	v->a[62503] = 3;
	v->a[62504] = sym_file_redirect;
	v->a[62505] = sym_heredoc_redirect;
	v->a[62506] = aux_sym_redirected_statement_repeat1;
	v->a[62507] = actions(1999);
	v->a[62508] = 8;
	v->a[62509] = anon_sym_LT;
	v->a[62510] = anon_sym_GT;
	v->a[62511] = anon_sym_GT_GT;
	v->a[62512] = anon_sym_AMP_GT;
	v->a[62513] = anon_sym_AMP_GT_GT;
	v->a[62514] = anon_sym_LT_AMP;
	v->a[62515] = anon_sym_GT_AMP;
	v->a[62516] = anon_sym_GT_PIPE;
	v->a[62517] = 12;
	v->a[62518] = actions(3);
	v->a[62519] = 1;
	small_parse_table_3126(v);
}

void	small_parse_table_3126(t_small_parse_table_array *v)
{
	v->a[62520] = sym_comment;
	v->a[62521] = actions(766);
	v->a[62522] = 1;
	v->a[62523] = anon_sym_PIPE;
	v->a[62524] = actions(2003);
	v->a[62525] = 1;
	v->a[62526] = aux_sym_heredoc_redirect_token1;
	v->a[62527] = actions(2005);
	v->a[62528] = 1;
	v->a[62529] = sym_file_descriptor;
	v->a[62530] = state(763);
	v->a[62531] = 1;
	v->a[62532] = sym_terminator;
	v->a[62533] = actions(764);
	v->a[62534] = 2;
	v->a[62535] = anon_sym_esac;
	v->a[62536] = anon_sym_SEMI_SEMI;
	v->a[62537] = actions(768);
	v->a[62538] = 2;
	v->a[62539] = anon_sym_AMP_AMP;
	small_parse_table_3127(v);
}

void	small_parse_table_3127(t_small_parse_table_array *v)
{
	v->a[62540] = anon_sym_PIPE_PIPE;
	v->a[62541] = actions(770);
	v->a[62542] = 2;
	v->a[62543] = anon_sym_LT_LT;
	v->a[62544] = anon_sym_LT_LT_DASH;
	v->a[62545] = actions(772);
	v->a[62546] = 2;
	v->a[62547] = anon_sym_AMP;
	v->a[62548] = anon_sym_SEMI;
	v->a[62549] = actions(2001);
	v->a[62550] = 2;
	v->a[62551] = anon_sym_LT_AMP_DASH;
	v->a[62552] = anon_sym_GT_AMP_DASH;
	v->a[62553] = state(1123);
	v->a[62554] = 3;
	v->a[62555] = sym_file_redirect;
	v->a[62556] = sym_heredoc_redirect;
	v->a[62557] = aux_sym_redirected_statement_repeat1;
	v->a[62558] = actions(1999);
	v->a[62559] = 8;
	small_parse_table_3128(v);
}

void	small_parse_table_3128(t_small_parse_table_array *v)
{
	v->a[62560] = anon_sym_LT;
	v->a[62561] = anon_sym_GT;
	v->a[62562] = anon_sym_GT_GT;
	v->a[62563] = anon_sym_AMP_GT;
	v->a[62564] = anon_sym_AMP_GT_GT;
	v->a[62565] = anon_sym_LT_AMP;
	v->a[62566] = anon_sym_GT_AMP;
	v->a[62567] = anon_sym_GT_PIPE;
	v->a[62568] = 12;
	v->a[62569] = actions(3);
	v->a[62570] = 1;
	v->a[62571] = sym_comment;
	v->a[62572] = actions(766);
	v->a[62573] = 1;
	v->a[62574] = anon_sym_PIPE;
	v->a[62575] = actions(2003);
	v->a[62576] = 1;
	v->a[62577] = aux_sym_heredoc_redirect_token1;
	v->a[62578] = actions(2005);
	v->a[62579] = 1;
	small_parse_table_3129(v);
}

void	small_parse_table_3129(t_small_parse_table_array *v)
{
	v->a[62580] = sym_file_descriptor;
	v->a[62581] = state(762);
	v->a[62582] = 1;
	v->a[62583] = sym_terminator;
	v->a[62584] = actions(764);
	v->a[62585] = 2;
	v->a[62586] = anon_sym_esac;
	v->a[62587] = anon_sym_SEMI_SEMI;
	v->a[62588] = actions(768);
	v->a[62589] = 2;
	v->a[62590] = anon_sym_AMP_AMP;
	v->a[62591] = anon_sym_PIPE_PIPE;
	v->a[62592] = actions(770);
	v->a[62593] = 2;
	v->a[62594] = anon_sym_LT_LT;
	v->a[62595] = anon_sym_LT_LT_DASH;
	v->a[62596] = actions(772);
	v->a[62597] = 2;
	v->a[62598] = anon_sym_AMP;
	v->a[62599] = anon_sym_SEMI;
	small_parse_table_3130(v);
}

/* EOF small_parse_table_625.c */

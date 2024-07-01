/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_611.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3055(t_small_parse_table_array *v)
{
	v->a[61100] = 12;
	v->a[61101] = actions(3);
	v->a[61102] = 1;
	v->a[61103] = sym_comment;
	v->a[61104] = actions(682);
	v->a[61105] = 1;
	v->a[61106] = anon_sym_PIPE;
	v->a[61107] = actions(695);
	v->a[61108] = 1;
	v->a[61109] = anon_sym_BQUOTE;
	v->a[61110] = actions(2009);
	v->a[61111] = 1;
	v->a[61112] = aux_sym_heredoc_redirect_token1;
	v->a[61113] = actions(2041);
	v->a[61114] = 1;
	v->a[61115] = sym_file_descriptor;
	v->a[61116] = state(826);
	v->a[61117] = 1;
	v->a[61118] = sym_terminator;
	v->a[61119] = actions(754);
	small_parse_table_3056(v);
}

void	small_parse_table_3056(t_small_parse_table_array *v)
{
	v->a[61120] = 2;
	v->a[61121] = anon_sym_LT_LT;
	v->a[61122] = anon_sym_LT_LT_DASH;
	v->a[61123] = actions(963);
	v->a[61124] = 2;
	v->a[61125] = anon_sym_AMP_AMP;
	v->a[61126] = anon_sym_PIPE_PIPE;
	v->a[61127] = actions(2039);
	v->a[61128] = 2;
	v->a[61129] = anon_sym_LT_AMP_DASH;
	v->a[61130] = anon_sym_GT_AMP_DASH;
	v->a[61131] = actions(750);
	v->a[61132] = 3;
	v->a[61133] = anon_sym_SEMI_SEMI;
	v->a[61134] = anon_sym_AMP;
	v->a[61135] = anon_sym_SEMI;
	v->a[61136] = state(1165);
	v->a[61137] = 3;
	v->a[61138] = sym_file_redirect;
	v->a[61139] = sym_heredoc_redirect;
	small_parse_table_3057(v);
}

void	small_parse_table_3057(t_small_parse_table_array *v)
{
	v->a[61140] = aux_sym_redirected_statement_repeat1;
	v->a[61141] = actions(2037);
	v->a[61142] = 6;
	v->a[61143] = anon_sym_LT;
	v->a[61144] = anon_sym_GT;
	v->a[61145] = anon_sym_GT_GT;
	v->a[61146] = anon_sym_LT_AMP;
	v->a[61147] = anon_sym_GT_AMP;
	v->a[61148] = anon_sym_GT_PIPE;
	v->a[61149] = 6;
	v->a[61150] = actions(3);
	v->a[61151] = 1;
	v->a[61152] = sym_comment;
	v->a[61153] = actions(2021);
	v->a[61154] = 1;
	v->a[61155] = aux_sym_concatenation_token1;
	v->a[61156] = actions(2043);
	v->a[61157] = 1;
	v->a[61158] = sym__concat;
	v->a[61159] = state(973);
	small_parse_table_3058(v);
}

void	small_parse_table_3058(t_small_parse_table_array *v)
{
	v->a[61160] = 1;
	v->a[61161] = aux_sym_concatenation_repeat1;
	v->a[61162] = actions(1085);
	v->a[61163] = 3;
	v->a[61164] = sym_file_descriptor;
	v->a[61165] = sym_variable_name;
	v->a[61166] = aux_sym_heredoc_redirect_token1;
	v->a[61167] = actions(1081);
	v->a[61168] = 17;
	v->a[61169] = anon_sym_PIPE;
	v->a[61170] = anon_sym_RPAREN;
	v->a[61171] = anon_sym_SEMI_SEMI;
	v->a[61172] = anon_sym_AMP_AMP;
	v->a[61173] = anon_sym_PIPE_PIPE;
	v->a[61174] = anon_sym_LT;
	v->a[61175] = anon_sym_GT;
	v->a[61176] = anon_sym_GT_GT;
	v->a[61177] = anon_sym_LT_AMP;
	v->a[61178] = anon_sym_GT_AMP;
	v->a[61179] = anon_sym_GT_PIPE;
	small_parse_table_3059(v);
}

void	small_parse_table_3059(t_small_parse_table_array *v)
{
	v->a[61180] = anon_sym_LT_AMP_DASH;
	v->a[61181] = anon_sym_GT_AMP_DASH;
	v->a[61182] = anon_sym_LT_LT;
	v->a[61183] = anon_sym_LT_LT_DASH;
	v->a[61184] = anon_sym_AMP;
	v->a[61185] = anon_sym_SEMI;
	v->a[61186] = 3;
	v->a[61187] = actions(3);
	v->a[61188] = 1;
	v->a[61189] = sym_comment;
	v->a[61190] = actions(1283);
	v->a[61191] = 4;
	v->a[61192] = sym_file_descriptor;
	v->a[61193] = sym__concat;
	v->a[61194] = ts_builtin_sym_end;
	v->a[61195] = aux_sym_heredoc_redirect_token1;
	v->a[61196] = actions(1285);
	v->a[61197] = 19;
	v->a[61198] = anon_sym_PIPE;
	v->a[61199] = anon_sym_RPAREN;
	small_parse_table_3060(v);
}

/* EOF small_parse_table_611.c */

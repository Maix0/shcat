/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_235.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1175(t_small_parse_table_array *v)
{
	v->a[23500] = sym_concatenation;
	v->a[23501] = aux_sym_for_statement_repeat1;
	v->a[23502] = state(458);
	v->a[23503] = 5;
	v->a[23504] = sym_arithmetic_expansion;
	v->a[23505] = sym_string;
	v->a[23506] = sym_simple_expansion;
	v->a[23507] = sym_expansion;
	v->a[23508] = sym_command_substitution;
	v->a[23509] = actions(540);
	v->a[23510] = 28;
	v->a[23511] = anon_sym_PIPE;
	v->a[23512] = anon_sym_SEMI_SEMI;
	v->a[23513] = anon_sym_AMP_AMP;
	v->a[23514] = anon_sym_PIPE_PIPE;
	v->a[23515] = anon_sym_LT;
	v->a[23516] = anon_sym_GT;
	v->a[23517] = anon_sym_GT_GT;
	v->a[23518] = anon_sym_AMP_GT;
	v->a[23519] = anon_sym_AMP_GT_GT;
	small_parse_table_1176(v);
}

void	small_parse_table_1176(t_small_parse_table_array *v)
{
	v->a[23520] = anon_sym_LT_AMP;
	v->a[23521] = anon_sym_GT_AMP;
	v->a[23522] = anon_sym_GT_PIPE;
	v->a[23523] = anon_sym_LT_AMP_DASH;
	v->a[23524] = anon_sym_GT_AMP_DASH;
	v->a[23525] = anon_sym_LT_LT;
	v->a[23526] = anon_sym_LT_LT_DASH;
	v->a[23527] = aux_sym_heredoc_redirect_token1;
	v->a[23528] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23529] = anon_sym_AMP;
	v->a[23530] = anon_sym_DOLLAR;
	v->a[23531] = anon_sym_DQUOTE;
	v->a[23532] = sym_raw_string;
	v->a[23533] = sym_number;
	v->a[23534] = anon_sym_DOLLAR_LBRACE;
	v->a[23535] = anon_sym_DOLLAR_LPAREN;
	v->a[23536] = anon_sym_BQUOTE;
	v->a[23537] = sym_word;
	v->a[23538] = anon_sym_SEMI;
	v->a[23539] = 12;
	small_parse_table_1177(v);
}

void	small_parse_table_1177(t_small_parse_table_array *v)
{
	v->a[23540] = actions(3);
	v->a[23541] = 1;
	v->a[23542] = sym_comment;
	v->a[23543] = actions(704);
	v->a[23544] = 1;
	v->a[23545] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23546] = actions(706);
	v->a[23547] = 1;
	v->a[23548] = anon_sym_DOLLAR;
	v->a[23549] = actions(708);
	v->a[23550] = 1;
	v->a[23551] = anon_sym_DQUOTE;
	v->a[23552] = actions(710);
	v->a[23553] = 1;
	v->a[23554] = anon_sym_DOLLAR_LBRACE;
	v->a[23555] = actions(712);
	v->a[23556] = 1;
	v->a[23557] = anon_sym_DOLLAR_LPAREN;
	v->a[23558] = actions(714);
	v->a[23559] = 1;
	small_parse_table_1178(v);
}

void	small_parse_table_1178(t_small_parse_table_array *v)
{
	v->a[23560] = anon_sym_BQUOTE;
	v->a[23561] = actions(538);
	v->a[23562] = 2;
	v->a[23563] = sym_file_descriptor;
	v->a[23564] = ts_builtin_sym_end;
	v->a[23565] = state(220);
	v->a[23566] = 2;
	v->a[23567] = sym_concatenation;
	v->a[23568] = aux_sym_for_statement_repeat1;
	v->a[23569] = actions(702);
	v->a[23570] = 3;
	v->a[23571] = sym_raw_string;
	v->a[23572] = sym_number;
	v->a[23573] = sym_word;
	v->a[23574] = state(447);
	v->a[23575] = 5;
	v->a[23576] = sym_arithmetic_expansion;
	v->a[23577] = sym_string;
	v->a[23578] = sym_simple_expansion;
	v->a[23579] = sym_expansion;
	small_parse_table_1179(v);
}

void	small_parse_table_1179(t_small_parse_table_array *v)
{
	v->a[23580] = sym_command_substitution;
	v->a[23581] = actions(540);
	v->a[23582] = 19;
	v->a[23583] = anon_sym_PIPE;
	v->a[23584] = anon_sym_SEMI_SEMI;
	v->a[23585] = anon_sym_AMP_AMP;
	v->a[23586] = anon_sym_PIPE_PIPE;
	v->a[23587] = anon_sym_LT;
	v->a[23588] = anon_sym_GT;
	v->a[23589] = anon_sym_GT_GT;
	v->a[23590] = anon_sym_AMP_GT;
	v->a[23591] = anon_sym_AMP_GT_GT;
	v->a[23592] = anon_sym_LT_AMP;
	v->a[23593] = anon_sym_GT_AMP;
	v->a[23594] = anon_sym_GT_PIPE;
	v->a[23595] = anon_sym_LT_AMP_DASH;
	v->a[23596] = anon_sym_GT_AMP_DASH;
	v->a[23597] = anon_sym_LT_LT;
	v->a[23598] = anon_sym_LT_LT_DASH;
	v->a[23599] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1180(v);
}

/* EOF small_parse_table_235.c */

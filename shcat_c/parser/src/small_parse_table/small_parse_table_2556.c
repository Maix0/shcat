/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2556.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12780(t_small_parse_table_array *v)
{
	v->a[255600] = anon_sym_PIPE_PIPE;
	v->a[255601] = anon_sym_AMP_AMP;
	v->a[255602] = anon_sym_PIPE;
	v->a[255603] = anon_sym_AMP;
	v->a[255604] = anon_sym_LT;
	v->a[255605] = anon_sym_GT;
	v->a[255606] = anon_sym_LT_LT;
	v->a[255607] = anon_sym_GT_GT;
	v->a[255608] = anon_sym_SEMI_SEMI;
	v->a[255609] = anon_sym_PIPE_AMP;
	v->a[255610] = anon_sym_AMP_GT;
	v->a[255611] = anon_sym_AMP_GT_GT;
	v->a[255612] = anon_sym_LT_AMP;
	v->a[255613] = anon_sym_GT_AMP;
	v->a[255614] = anon_sym_GT_PIPE;
	v->a[255615] = anon_sym_LT_AMP_DASH;
	v->a[255616] = anon_sym_GT_AMP_DASH;
	v->a[255617] = anon_sym_LT_LT_DASH;
	v->a[255618] = anon_sym_BQUOTE;
	v->a[255619] = 3;
	small_parse_table_12781(v);
}

void	small_parse_table_12781(t_small_parse_table_array *v)
{
	v->a[255620] = actions(3);
	v->a[255621] = 1;
	v->a[255622] = sym_comment;
	v->a[255623] = actions(1310);
	v->a[255624] = 4;
	v->a[255625] = sym__concat;
	v->a[255626] = sym_test_operator;
	v->a[255627] = sym__brace_start;
	v->a[255628] = aux_sym_heredoc_redirect_token1;
	v->a[255629] = actions(1308);
	v->a[255630] = 21;
	v->a[255631] = anon_sym_LPAREN_LPAREN;
	v->a[255632] = anon_sym_SEMI;
	v->a[255633] = anon_sym_AMP;
	v->a[255634] = anon_sym_SEMI_SEMI;
	v->a[255635] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[255636] = anon_sym_DOLLAR_LBRACK;
	v->a[255637] = aux_sym_concatenation_token1;
	v->a[255638] = anon_sym_DOLLAR;
	v->a[255639] = sym__special_character;
	small_parse_table_12782(v);
}

void	small_parse_table_12782(t_small_parse_table_array *v)
{
	v->a[255640] = anon_sym_DQUOTE;
	v->a[255641] = sym_raw_string;
	v->a[255642] = sym_ansi_c_string;
	v->a[255643] = aux_sym_number_token1;
	v->a[255644] = aux_sym_number_token2;
	v->a[255645] = anon_sym_DOLLAR_LBRACE;
	v->a[255646] = anon_sym_DOLLAR_LPAREN;
	v->a[255647] = anon_sym_BQUOTE;
	v->a[255648] = anon_sym_DOLLAR_BQUOTE;
	v->a[255649] = anon_sym_LT_LPAREN;
	v->a[255650] = anon_sym_GT_LPAREN;
	v->a[255651] = sym_word;
	v->a[255652] = 16;
	v->a[255653] = actions(3);
	v->a[255654] = 1;
	v->a[255655] = sym_comment;
	v->a[255656] = actions(11760);
	v->a[255657] = 1;
	v->a[255658] = anon_sym_BANG2;
	v->a[255659] = actions(11764);
	small_parse_table_12783(v);
}

void	small_parse_table_12783(t_small_parse_table_array *v)
{
	v->a[255660] = 1;
	v->a[255661] = anon_sym_DOLLAR_LPAREN;
	v->a[255662] = actions(11766);
	v->a[255663] = 1;
	v->a[255664] = anon_sym_BQUOTE;
	v->a[255665] = actions(11768);
	v->a[255666] = 1;
	v->a[255667] = anon_sym_DOLLAR_BQUOTE;
	v->a[255668] = actions(11770);
	v->a[255669] = 1;
	v->a[255670] = aux_sym__simple_variable_name_token1;
	v->a[255671] = actions(11772);
	v->a[255672] = 1;
	v->a[255673] = sym_variable_name;
	v->a[255674] = actions(11776);
	v->a[255675] = 1;
	v->a[255676] = anon_sym_RBRACE3;
	v->a[255677] = state(3532);
	v->a[255678] = 1;
	v->a[255679] = sym_subscript;
	small_parse_table_12784(v);
}

void	small_parse_table_12784(t_small_parse_table_array *v)
{
	v->a[255680] = state(6428);
	v->a[255681] = 1;
	v->a[255682] = aux_sym__expansion_body_repeat1;
	v->a[255683] = state(6472);
	v->a[255684] = 1;
	v->a[255685] = sym_command_substitution;
	v->a[255686] = state(7521);
	v->a[255687] = 1;
	v->a[255688] = sym__expansion_body;
	v->a[255689] = actions(11762);
	v->a[255690] = 2;
	v->a[255691] = anon_sym_POUND2;
	v->a[255692] = anon_sym_EQ2;
	v->a[255693] = actions(8050);
	v->a[255694] = 3;
	v->a[255695] = sym__external_expansion_sym_hash;
	v->a[255696] = sym__external_expansion_sym_bang;
	v->a[255697] = sym__external_expansion_sym_equal;
	v->a[255698] = actions(11754);
	v->a[255699] = 4;
	small_parse_table_12785(v);
}

/* EOF small_parse_table_2556.c */

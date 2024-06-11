/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_316.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1580(t_small_parse_table_array *v)
{
	v->a[31600] = anon_sym_GT_PIPE;
	v->a[31601] = anon_sym_LT_AMP_DASH;
	v->a[31602] = anon_sym_GT_AMP_DASH;
	v->a[31603] = anon_sym_LT_LT;
	v->a[31604] = anon_sym_LT_LT_DASH;
	v->a[31605] = aux_sym_heredoc_redirect_token1;
	v->a[31606] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31607] = anon_sym_AMP;
	v->a[31608] = aux_sym_concatenation_token1;
	v->a[31609] = anon_sym_DOLLAR;
	v->a[31610] = anon_sym_DQUOTE;
	v->a[31611] = sym_raw_string;
	v->a[31612] = sym_number;
	v->a[31613] = anon_sym_DOLLAR_LBRACE;
	v->a[31614] = anon_sym_DOLLAR_LPAREN;
	v->a[31615] = anon_sym_BQUOTE;
	v->a[31616] = sym_word;
	v->a[31617] = anon_sym_SEMI;
	v->a[31618] = 5;
	v->a[31619] = actions(3);
	small_parse_table_1581(v);
}

void	small_parse_table_1581(t_small_parse_table_array *v)
{
	v->a[31620] = 1;
	v->a[31621] = sym_comment;
	v->a[31622] = actions(608);
	v->a[31623] = 2;
	v->a[31624] = sym_file_descriptor;
	v->a[31625] = sym_variable_name;
	v->a[31626] = state(389);
	v->a[31627] = 2;
	v->a[31628] = sym_concatenation;
	v->a[31629] = aux_sym_for_statement_repeat1;
	v->a[31630] = state(909);
	v->a[31631] = 5;
	v->a[31632] = sym_arithmetic_expansion;
	v->a[31633] = sym_string;
	v->a[31634] = sym_simple_expansion;
	v->a[31635] = sym_expansion;
	v->a[31636] = sym_command_substitution;
	v->a[31637] = actions(610);
	v->a[31638] = 25;
	v->a[31639] = anon_sym_PIPE;
	small_parse_table_1582(v);
}

void	small_parse_table_1582(t_small_parse_table_array *v)
{
	v->a[31640] = anon_sym_AMP_AMP;
	v->a[31641] = anon_sym_PIPE_PIPE;
	v->a[31642] = anon_sym_LT;
	v->a[31643] = anon_sym_GT;
	v->a[31644] = anon_sym_GT_GT;
	v->a[31645] = anon_sym_AMP_GT;
	v->a[31646] = anon_sym_AMP_GT_GT;
	v->a[31647] = anon_sym_LT_AMP;
	v->a[31648] = anon_sym_GT_AMP;
	v->a[31649] = anon_sym_GT_PIPE;
	v->a[31650] = anon_sym_LT_AMP_DASH;
	v->a[31651] = anon_sym_GT_AMP_DASH;
	v->a[31652] = anon_sym_LT_LT;
	v->a[31653] = anon_sym_LT_LT_DASH;
	v->a[31654] = aux_sym_heredoc_redirect_token1;
	v->a[31655] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31656] = anon_sym_DOLLAR;
	v->a[31657] = anon_sym_DQUOTE;
	v->a[31658] = sym_raw_string;
	v->a[31659] = sym_number;
	small_parse_table_1583(v);
}

void	small_parse_table_1583(t_small_parse_table_array *v)
{
	v->a[31660] = anon_sym_DOLLAR_LBRACE;
	v->a[31661] = anon_sym_DOLLAR_LPAREN;
	v->a[31662] = anon_sym_BQUOTE;
	v->a[31663] = sym_word;
	v->a[31664] = 3;
	v->a[31665] = actions(1094);
	v->a[31666] = 1;
	v->a[31667] = sym_comment;
	v->a[31668] = actions(1161);
	v->a[31669] = 13;
	v->a[31670] = anon_sym_PIPE;
	v->a[31671] = anon_sym_EQ;
	v->a[31672] = anon_sym_LT;
	v->a[31673] = anon_sym_GT;
	v->a[31674] = anon_sym_GT_GT;
	v->a[31675] = anon_sym_LT_LT;
	v->a[31676] = anon_sym_CARET;
	v->a[31677] = anon_sym_AMP;
	v->a[31678] = anon_sym_PLUS;
	v->a[31679] = anon_sym_DASH;
	small_parse_table_1584(v);
}

void	small_parse_table_1584(t_small_parse_table_array *v)
{
	v->a[31680] = anon_sym_STAR;
	v->a[31681] = anon_sym_SLASH;
	v->a[31682] = anon_sym_PERCENT;
	v->a[31683] = actions(1163);
	v->a[31684] = 21;
	v->a[31685] = anon_sym_AMP_AMP;
	v->a[31686] = anon_sym_PIPE_PIPE;
	v->a[31687] = anon_sym_RPAREN_RPAREN;
	v->a[31688] = anon_sym_PLUS_EQ;
	v->a[31689] = anon_sym_DASH_EQ;
	v->a[31690] = anon_sym_STAR_EQ;
	v->a[31691] = anon_sym_SLASH_EQ;
	v->a[31692] = anon_sym_PERCENT_EQ;
	v->a[31693] = anon_sym_LT_LT_EQ;
	v->a[31694] = anon_sym_GT_GT_EQ;
	v->a[31695] = anon_sym_AMP_EQ;
	v->a[31696] = anon_sym_CARET_EQ;
	v->a[31697] = anon_sym_PIPE_EQ;
	v->a[31698] = anon_sym_EQ_EQ;
	v->a[31699] = anon_sym_BANG_EQ;
	small_parse_table_1585(v);
}

/* EOF small_parse_table_316.c */

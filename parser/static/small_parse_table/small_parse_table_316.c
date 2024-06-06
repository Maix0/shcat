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
	v->a[31600] = anon_sym_AMP_GT_GT;
	v->a[31601] = anon_sym_LT_AMP;
	v->a[31602] = anon_sym_GT_AMP;
	v->a[31603] = anon_sym_GT_PIPE;
	v->a[31604] = anon_sym_LT_AMP_DASH;
	v->a[31605] = anon_sym_GT_AMP_DASH;
	v->a[31606] = anon_sym_LT_LT;
	v->a[31607] = anon_sym_LT_LT_DASH;
	v->a[31608] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31609] = anon_sym_AMP;
	v->a[31610] = anon_sym_DOLLAR;
	v->a[31611] = sym__special_character;
	v->a[31612] = anon_sym_DQUOTE;
	v->a[31613] = sym_raw_string;
	v->a[31614] = aux_sym_number_token1;
	v->a[31615] = aux_sym_number_token2;
	v->a[31616] = anon_sym_DOLLAR_LBRACE;
	v->a[31617] = anon_sym_DOLLAR_LPAREN;
	v->a[31618] = anon_sym_BQUOTE;
	v->a[31619] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_1581(v);
}

void	small_parse_table_1581(t_small_parse_table_array *v)
{
	v->a[31620] = sym_word;
	v->a[31621] = anon_sym_SEMI;
	v->a[31622] = 7;
	v->a[31623] = actions(3);
	v->a[31624] = 1;
	v->a[31625] = sym_comment;
	v->a[31626] = actions(3288);
	v->a[31627] = 1;
	v->a[31628] = aux_sym_concatenation_token1;
	v->a[31629] = actions(3290);
	v->a[31630] = 1;
	v->a[31631] = sym__concat;
	v->a[31632] = actions(3407);
	v->a[31633] = 1;
	v->a[31634] = anon_sym_LPAREN;
	v->a[31635] = state(713);
	v->a[31636] = 1;
	v->a[31637] = aux_sym_concatenation_repeat1;
	v->a[31638] = actions(2754);
	v->a[31639] = 6;
	small_parse_table_1582(v);
}

void	small_parse_table_1582(t_small_parse_table_array *v)
{
	v->a[31640] = sym_file_descriptor;
	v->a[31641] = sym_test_operator;
	v->a[31642] = sym__bare_dollar;
	v->a[31643] = sym__brace_start;
	v->a[31644] = ts_builtin_sym_end;
	v->a[31645] = aux_sym_heredoc_redirect_token1;
	v->a[31646] = actions(2749);
	v->a[31647] = 31;
	v->a[31648] = anon_sym_PIPE;
	v->a[31649] = anon_sym_SEMI_SEMI;
	v->a[31650] = anon_sym_PIPE_AMP;
	v->a[31651] = anon_sym_AMP_AMP;
	v->a[31652] = anon_sym_PIPE_PIPE;
	v->a[31653] = anon_sym_LT;
	v->a[31654] = anon_sym_GT;
	v->a[31655] = anon_sym_GT_GT;
	v->a[31656] = anon_sym_AMP_GT;
	v->a[31657] = anon_sym_AMP_GT_GT;
	v->a[31658] = anon_sym_LT_AMP;
	v->a[31659] = anon_sym_GT_AMP;
	small_parse_table_1583(v);
}

void	small_parse_table_1583(t_small_parse_table_array *v)
{
	v->a[31660] = anon_sym_GT_PIPE;
	v->a[31661] = anon_sym_LT_AMP_DASH;
	v->a[31662] = anon_sym_GT_AMP_DASH;
	v->a[31663] = anon_sym_LT_LT;
	v->a[31664] = anon_sym_LT_LT_DASH;
	v->a[31665] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31666] = anon_sym_AMP;
	v->a[31667] = anon_sym_DOLLAR;
	v->a[31668] = sym__special_character;
	v->a[31669] = anon_sym_DQUOTE;
	v->a[31670] = sym_raw_string;
	v->a[31671] = aux_sym_number_token1;
	v->a[31672] = aux_sym_number_token2;
	v->a[31673] = anon_sym_DOLLAR_LBRACE;
	v->a[31674] = anon_sym_DOLLAR_LPAREN;
	v->a[31675] = anon_sym_BQUOTE;
	v->a[31676] = anon_sym_DOLLAR_BQUOTE;
	v->a[31677] = sym_word;
	v->a[31678] = anon_sym_SEMI;
	v->a[31679] = 3;
	small_parse_table_1584(v);
}

void	small_parse_table_1584(t_small_parse_table_array *v)
{
	v->a[31680] = actions(3);
	v->a[31681] = 1;
	v->a[31682] = sym_comment;
	v->a[31683] = actions(2774);
	v->a[31684] = 6;
	v->a[31685] = sym_file_descriptor;
	v->a[31686] = sym__concat;
	v->a[31687] = sym_variable_name;
	v->a[31688] = sym_test_operator;
	v->a[31689] = sym__brace_start;
	v->a[31690] = aux_sym_heredoc_redirect_token1;
	v->a[31691] = actions(2772);
	v->a[31692] = 35;
	v->a[31693] = anon_sym_PIPE;
	v->a[31694] = anon_sym_SEMI_SEMI;
	v->a[31695] = anon_sym_SEMI_AMP;
	v->a[31696] = anon_sym_SEMI_SEMI_AMP;
	v->a[31697] = anon_sym_PIPE_AMP;
	v->a[31698] = anon_sym_AMP_AMP;
	v->a[31699] = anon_sym_PIPE_PIPE;
	small_parse_table_1585(v);
}

/* EOF small_parse_table_316.c */

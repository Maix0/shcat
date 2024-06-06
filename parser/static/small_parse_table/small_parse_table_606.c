/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_606.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3030(t_small_parse_table_array *v)
{
	v->a[60600] = sym_word;
	v->a[60601] = 6;
	v->a[60602] = actions(3);
	v->a[60603] = 1;
	v->a[60604] = sym_comment;
	v->a[60605] = actions(3358);
	v->a[60606] = 1;
	v->a[60607] = aux_sym_concatenation_token1;
	v->a[60608] = actions(3978);
	v->a[60609] = 1;
	v->a[60610] = sym__concat;
	v->a[60611] = state(666);
	v->a[60612] = 1;
	v->a[60613] = aux_sym_concatenation_repeat1;
	v->a[60614] = actions(2690);
	v->a[60615] = 5;
	v->a[60616] = sym_file_descriptor;
	v->a[60617] = sym_test_operator;
	v->a[60618] = sym__bare_dollar;
	v->a[60619] = sym__brace_start;
	small_parse_table_3031(v);
}

void	small_parse_table_3031(t_small_parse_table_array *v)
{
	v->a[60620] = aux_sym_heredoc_redirect_token1;
	v->a[60621] = actions(2688);
	v->a[60622] = 29;
	v->a[60623] = anon_sym_LPAREN;
	v->a[60624] = anon_sym_PIPE;
	v->a[60625] = anon_sym_PIPE_AMP;
	v->a[60626] = anon_sym_AMP_AMP;
	v->a[60627] = anon_sym_PIPE_PIPE;
	v->a[60628] = anon_sym_LT;
	v->a[60629] = anon_sym_GT;
	v->a[60630] = anon_sym_GT_GT;
	v->a[60631] = anon_sym_AMP_GT;
	v->a[60632] = anon_sym_AMP_GT_GT;
	v->a[60633] = anon_sym_LT_AMP;
	v->a[60634] = anon_sym_GT_AMP;
	v->a[60635] = anon_sym_GT_PIPE;
	v->a[60636] = anon_sym_LT_AMP_DASH;
	v->a[60637] = anon_sym_GT_AMP_DASH;
	v->a[60638] = anon_sym_LT_LT;
	v->a[60639] = anon_sym_LT_LT_DASH;
	small_parse_table_3032(v);
}

void	small_parse_table_3032(t_small_parse_table_array *v)
{
	v->a[60640] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60641] = anon_sym_DOLLAR;
	v->a[60642] = sym__special_character;
	v->a[60643] = anon_sym_DQUOTE;
	v->a[60644] = sym_raw_string;
	v->a[60645] = aux_sym_number_token1;
	v->a[60646] = aux_sym_number_token2;
	v->a[60647] = anon_sym_DOLLAR_LBRACE;
	v->a[60648] = anon_sym_DOLLAR_LPAREN;
	v->a[60649] = anon_sym_BQUOTE;
	v->a[60650] = anon_sym_DOLLAR_BQUOTE;
	v->a[60651] = sym_word;
	v->a[60652] = 5;
	v->a[60653] = actions(3);
	v->a[60654] = 1;
	v->a[60655] = sym_comment;
	v->a[60656] = actions(3980);
	v->a[60657] = 1;
	v->a[60658] = sym__special_character;
	v->a[60659] = state(1309);
	small_parse_table_3033(v);
}

void	small_parse_table_3033(t_small_parse_table_array *v)
{
	v->a[60660] = 1;
	v->a[60661] = aux_sym__literal_repeat1;
	v->a[60662] = actions(3197);
	v->a[60663] = 4;
	v->a[60664] = sym_file_descriptor;
	v->a[60665] = sym_test_operator;
	v->a[60666] = sym__brace_start;
	v->a[60667] = aux_sym_heredoc_redirect_token1;
	v->a[60668] = actions(3195);
	v->a[60669] = 31;
	v->a[60670] = anon_sym_PIPE;
	v->a[60671] = anon_sym_RPAREN;
	v->a[60672] = anon_sym_SEMI_SEMI;
	v->a[60673] = anon_sym_PIPE_AMP;
	v->a[60674] = anon_sym_AMP_AMP;
	v->a[60675] = anon_sym_PIPE_PIPE;
	v->a[60676] = anon_sym_LT;
	v->a[60677] = anon_sym_GT;
	v->a[60678] = anon_sym_GT_GT;
	v->a[60679] = anon_sym_AMP_GT;
	small_parse_table_3034(v);
}

void	small_parse_table_3034(t_small_parse_table_array *v)
{
	v->a[60680] = anon_sym_AMP_GT_GT;
	v->a[60681] = anon_sym_LT_AMP;
	v->a[60682] = anon_sym_GT_AMP;
	v->a[60683] = anon_sym_GT_PIPE;
	v->a[60684] = anon_sym_LT_AMP_DASH;
	v->a[60685] = anon_sym_GT_AMP_DASH;
	v->a[60686] = anon_sym_LT_LT;
	v->a[60687] = anon_sym_LT_LT_DASH;
	v->a[60688] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60689] = anon_sym_AMP;
	v->a[60690] = anon_sym_DOLLAR;
	v->a[60691] = anon_sym_DQUOTE;
	v->a[60692] = sym_raw_string;
	v->a[60693] = aux_sym_number_token1;
	v->a[60694] = aux_sym_number_token2;
	v->a[60695] = anon_sym_DOLLAR_LBRACE;
	v->a[60696] = anon_sym_DOLLAR_LPAREN;
	v->a[60697] = anon_sym_BQUOTE;
	v->a[60698] = anon_sym_DOLLAR_BQUOTE;
	v->a[60699] = sym_word;
	small_parse_table_3035(v);
}

/* EOF small_parse_table_606.c */

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
	v->a[60600] = state(940);
	v->a[60601] = 1;
	v->a[60602] = aux_sym_concatenation_repeat1;
	v->a[60603] = actions(1129);
	v->a[60604] = 23;
	v->a[60605] = anon_sym_AMP_AMP;
	v->a[60606] = anon_sym_PIPE_PIPE;
	v->a[60607] = anon_sym_LT;
	v->a[60608] = anon_sym_GT;
	v->a[60609] = anon_sym_GT_GT;
	v->a[60610] = anon_sym_AMP_GT;
	v->a[60611] = anon_sym_AMP_GT_GT;
	v->a[60612] = anon_sym_LT_AMP;
	v->a[60613] = anon_sym_GT_AMP;
	v->a[60614] = anon_sym_GT_PIPE;
	v->a[60615] = anon_sym_LT_AMP_DASH;
	v->a[60616] = anon_sym_GT_AMP_DASH;
	v->a[60617] = aux_sym_heredoc_redirect_token1;
	v->a[60618] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60619] = anon_sym_DOLLAR;
	small_parse_table_3031(v);
}

void	small_parse_table_3031(t_small_parse_table_array *v)
{
	v->a[60620] = anon_sym_DQUOTE;
	v->a[60621] = sym_raw_string;
	v->a[60622] = aux_sym_number_token1;
	v->a[60623] = aux_sym_number_token2;
	v->a[60624] = anon_sym_DOLLAR_LBRACE;
	v->a[60625] = anon_sym_DOLLAR_LPAREN;
	v->a[60626] = anon_sym_BQUOTE;
	v->a[60627] = sym_word;
	v->a[60628] = 6;
	v->a[60629] = actions(3);
	v->a[60630] = 1;
	v->a[60631] = sym_comment;
	v->a[60632] = actions(1112);
	v->a[60633] = 1;
	v->a[60634] = sym_file_descriptor;
	v->a[60635] = actions(2169);
	v->a[60636] = 1;
	v->a[60637] = aux_sym_concatenation_token1;
	v->a[60638] = actions(2172);
	v->a[60639] = 1;
	small_parse_table_3032(v);
}

void	small_parse_table_3032(t_small_parse_table_array *v)
{
	v->a[60640] = sym__concat;
	v->a[60641] = state(940);
	v->a[60642] = 1;
	v->a[60643] = aux_sym_concatenation_repeat1;
	v->a[60644] = actions(1114);
	v->a[60645] = 23;
	v->a[60646] = anon_sym_AMP_AMP;
	v->a[60647] = anon_sym_PIPE_PIPE;
	v->a[60648] = anon_sym_LT;
	v->a[60649] = anon_sym_GT;
	v->a[60650] = anon_sym_GT_GT;
	v->a[60651] = anon_sym_AMP_GT;
	v->a[60652] = anon_sym_AMP_GT_GT;
	v->a[60653] = anon_sym_LT_AMP;
	v->a[60654] = anon_sym_GT_AMP;
	v->a[60655] = anon_sym_GT_PIPE;
	v->a[60656] = anon_sym_LT_AMP_DASH;
	v->a[60657] = anon_sym_GT_AMP_DASH;
	v->a[60658] = aux_sym_heredoc_redirect_token1;
	v->a[60659] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3033(v);
}

void	small_parse_table_3033(t_small_parse_table_array *v)
{
	v->a[60660] = anon_sym_DOLLAR;
	v->a[60661] = anon_sym_DQUOTE;
	v->a[60662] = sym_raw_string;
	v->a[60663] = aux_sym_number_token1;
	v->a[60664] = aux_sym_number_token2;
	v->a[60665] = anon_sym_DOLLAR_LBRACE;
	v->a[60666] = anon_sym_DOLLAR_LPAREN;
	v->a[60667] = anon_sym_BQUOTE;
	v->a[60668] = sym_word;
	v->a[60669] = 6;
	v->a[60670] = actions(3);
	v->a[60671] = 1;
	v->a[60672] = sym_comment;
	v->a[60673] = actions(2175);
	v->a[60674] = 1;
	v->a[60675] = aux_sym_concatenation_token1;
	v->a[60676] = actions(2178);
	v->a[60677] = 1;
	v->a[60678] = sym__concat;
	v->a[60679] = state(941);
	small_parse_table_3034(v);
}

void	small_parse_table_3034(t_small_parse_table_array *v)
{
	v->a[60680] = 1;
	v->a[60681] = aux_sym_concatenation_repeat1;
	v->a[60682] = actions(1112);
	v->a[60683] = 4;
	v->a[60684] = sym_file_descriptor;
	v->a[60685] = sym_variable_name;
	v->a[60686] = ts_builtin_sym_end;
	v->a[60687] = aux_sym_heredoc_redirect_token1;
	v->a[60688] = actions(1114);
	v->a[60689] = 20;
	v->a[60690] = anon_sym_PIPE;
	v->a[60691] = anon_sym_RPAREN;
	v->a[60692] = anon_sym_SEMI_SEMI;
	v->a[60693] = anon_sym_AMP_AMP;
	v->a[60694] = anon_sym_PIPE_PIPE;
	v->a[60695] = anon_sym_LT;
	v->a[60696] = anon_sym_GT;
	v->a[60697] = anon_sym_GT_GT;
	v->a[60698] = anon_sym_AMP_GT;
	v->a[60699] = anon_sym_AMP_GT_GT;
	small_parse_table_3035(v);
}

/* EOF small_parse_table_606.c */

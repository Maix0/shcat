/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_616.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3080(t_small_parse_table_array *v)
{
	v->a[61600] = sym_file_descriptor;
	v->a[61601] = actions(2185);
	v->a[61602] = 1;
	v->a[61603] = sym_variable_name;
	v->a[61604] = actions(2183);
	v->a[61605] = 2;
	v->a[61606] = aux_sym__simple_variable_name_token1;
	v->a[61607] = aux_sym__multiline_variable_name_token1;
	v->a[61608] = actions(2181);
	v->a[61609] = 9;
	v->a[61610] = anon_sym_BANG;
	v->a[61611] = anon_sym_DASH;
	v->a[61612] = anon_sym_STAR;
	v->a[61613] = anon_sym_QMARK;
	v->a[61614] = anon_sym_DOLLAR;
	v->a[61615] = anon_sym_POUND;
	v->a[61616] = anon_sym_AT;
	v->a[61617] = anon_sym_0;
	v->a[61618] = anon_sym__;
	v->a[61619] = actions(407);
	small_parse_table_3081(v);
}

void	small_parse_table_3081(t_small_parse_table_array *v)
{
	v->a[61620] = 13;
	v->a[61621] = anon_sym_AMP_AMP;
	v->a[61622] = anon_sym_PIPE_PIPE;
	v->a[61623] = anon_sym_LT;
	v->a[61624] = anon_sym_GT;
	v->a[61625] = anon_sym_GT_GT;
	v->a[61626] = anon_sym_AMP_GT;
	v->a[61627] = anon_sym_AMP_GT_GT;
	v->a[61628] = anon_sym_LT_AMP;
	v->a[61629] = anon_sym_GT_AMP;
	v->a[61630] = anon_sym_GT_PIPE;
	v->a[61631] = anon_sym_LT_AMP_DASH;
	v->a[61632] = anon_sym_GT_AMP_DASH;
	v->a[61633] = aux_sym_heredoc_redirect_token1;
	v->a[61634] = 3;
	v->a[61635] = actions(3);
	v->a[61636] = 1;
	v->a[61637] = sym_comment;
	v->a[61638] = actions(1247);
	v->a[61639] = 2;
	small_parse_table_3082(v);
}

void	small_parse_table_3082(t_small_parse_table_array *v)
{
	v->a[61640] = sym_file_descriptor;
	v->a[61641] = sym__concat;
	v->a[61642] = actions(1249);
	v->a[61643] = 24;
	v->a[61644] = anon_sym_AMP_AMP;
	v->a[61645] = anon_sym_PIPE_PIPE;
	v->a[61646] = anon_sym_LT;
	v->a[61647] = anon_sym_GT;
	v->a[61648] = anon_sym_GT_GT;
	v->a[61649] = anon_sym_AMP_GT;
	v->a[61650] = anon_sym_AMP_GT_GT;
	v->a[61651] = anon_sym_LT_AMP;
	v->a[61652] = anon_sym_GT_AMP;
	v->a[61653] = anon_sym_GT_PIPE;
	v->a[61654] = anon_sym_LT_AMP_DASH;
	v->a[61655] = anon_sym_GT_AMP_DASH;
	v->a[61656] = aux_sym_heredoc_redirect_token1;
	v->a[61657] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61658] = aux_sym_concatenation_token1;
	v->a[61659] = anon_sym_DOLLAR;
	small_parse_table_3083(v);
}

void	small_parse_table_3083(t_small_parse_table_array *v)
{
	v->a[61660] = anon_sym_DQUOTE;
	v->a[61661] = sym_raw_string;
	v->a[61662] = aux_sym_number_token1;
	v->a[61663] = aux_sym_number_token2;
	v->a[61664] = anon_sym_DOLLAR_LBRACE;
	v->a[61665] = anon_sym_DOLLAR_LPAREN;
	v->a[61666] = anon_sym_BQUOTE;
	v->a[61667] = sym_word;
	v->a[61668] = 3;
	v->a[61669] = actions(3);
	v->a[61670] = 1;
	v->a[61671] = sym_comment;
	v->a[61672] = actions(1247);
	v->a[61673] = 5;
	v->a[61674] = sym_file_descriptor;
	v->a[61675] = sym__concat;
	v->a[61676] = sym_variable_name;
	v->a[61677] = ts_builtin_sym_end;
	v->a[61678] = aux_sym_heredoc_redirect_token1;
	v->a[61679] = actions(1249);
	small_parse_table_3084(v);
}

void	small_parse_table_3084(t_small_parse_table_array *v)
{
	v->a[61680] = 21;
	v->a[61681] = anon_sym_PIPE;
	v->a[61682] = anon_sym_RPAREN;
	v->a[61683] = anon_sym_SEMI_SEMI;
	v->a[61684] = anon_sym_AMP_AMP;
	v->a[61685] = anon_sym_PIPE_PIPE;
	v->a[61686] = anon_sym_LT;
	v->a[61687] = anon_sym_GT;
	v->a[61688] = anon_sym_GT_GT;
	v->a[61689] = anon_sym_AMP_GT;
	v->a[61690] = anon_sym_AMP_GT_GT;
	v->a[61691] = anon_sym_LT_AMP;
	v->a[61692] = anon_sym_GT_AMP;
	v->a[61693] = anon_sym_GT_PIPE;
	v->a[61694] = anon_sym_LT_AMP_DASH;
	v->a[61695] = anon_sym_GT_AMP_DASH;
	v->a[61696] = anon_sym_LT_LT;
	v->a[61697] = anon_sym_LT_LT_DASH;
	v->a[61698] = anon_sym_AMP;
	v->a[61699] = aux_sym_concatenation_token1;
	small_parse_table_3085(v);
}

/* EOF small_parse_table_616.c */

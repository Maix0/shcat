/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_916.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4580(t_small_parse_table_array *v)
{
	v->a[91600] = anon_sym_RPAREN;
	v->a[91601] = anon_sym_SEMI_SEMI;
	v->a[91602] = anon_sym_PIPE_AMP;
	v->a[91603] = anon_sym_AMP_GT;
	v->a[91604] = anon_sym_AMP_GT_GT;
	v->a[91605] = anon_sym_LT_AMP;
	v->a[91606] = anon_sym_GT_AMP;
	v->a[91607] = anon_sym_GT_PIPE;
	v->a[91608] = anon_sym_LT_AMP_DASH;
	v->a[91609] = anon_sym_GT_AMP_DASH;
	v->a[91610] = anon_sym_LT_LT_DASH;
	v->a[91611] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[91612] = anon_sym_DOLLAR_LBRACK;
	v->a[91613] = anon_sym_DOLLAR;
	v->a[91614] = sym__special_character;
	v->a[91615] = anon_sym_DQUOTE;
	v->a[91616] = sym_raw_string;
	v->a[91617] = sym_ansi_c_string;
	v->a[91618] = aux_sym_number_token1;
	v->a[91619] = aux_sym_number_token2;
	small_parse_table_4581(v);
}

void	small_parse_table_4581(t_small_parse_table_array *v)
{
	v->a[91620] = anon_sym_DOLLAR_LBRACE;
	v->a[91621] = anon_sym_DOLLAR_LPAREN;
	v->a[91622] = anon_sym_BQUOTE;
	v->a[91623] = anon_sym_DOLLAR_BQUOTE;
	v->a[91624] = anon_sym_LT_LPAREN;
	v->a[91625] = anon_sym_GT_LPAREN;
	v->a[91626] = sym_word;
	v->a[91627] = 3;
	v->a[91628] = actions(3);
	v->a[91629] = 1;
	v->a[91630] = sym_comment;
	v->a[91631] = actions(1263);
	v->a[91632] = 4;
	v->a[91633] = sym_file_descriptor;
	v->a[91634] = sym_test_operator;
	v->a[91635] = sym__brace_start;
	v->a[91636] = aux_sym_heredoc_redirect_token1;
	v->a[91637] = actions(1261);
	v->a[91638] = 40;
	v->a[91639] = anon_sym_LPAREN_LPAREN;
	small_parse_table_4582(v);
}

void	small_parse_table_4582(t_small_parse_table_array *v)
{
	v->a[91640] = anon_sym_SEMI;
	v->a[91641] = anon_sym_PIPE_PIPE;
	v->a[91642] = anon_sym_AMP_AMP;
	v->a[91643] = anon_sym_PIPE;
	v->a[91644] = anon_sym_AMP;
	v->a[91645] = anon_sym_LT;
	v->a[91646] = anon_sym_GT;
	v->a[91647] = anon_sym_LT_LT;
	v->a[91648] = anon_sym_GT_GT;
	v->a[91649] = anon_sym_esac;
	v->a[91650] = anon_sym_SEMI_SEMI;
	v->a[91651] = anon_sym_SEMI_AMP;
	v->a[91652] = anon_sym_SEMI_SEMI_AMP;
	v->a[91653] = anon_sym_PIPE_AMP;
	v->a[91654] = anon_sym_AMP_GT;
	v->a[91655] = anon_sym_AMP_GT_GT;
	v->a[91656] = anon_sym_LT_AMP;
	v->a[91657] = anon_sym_GT_AMP;
	v->a[91658] = anon_sym_GT_PIPE;
	v->a[91659] = anon_sym_LT_AMP_DASH;
	small_parse_table_4583(v);
}

void	small_parse_table_4583(t_small_parse_table_array *v)
{
	v->a[91660] = anon_sym_GT_AMP_DASH;
	v->a[91661] = anon_sym_LT_LT_DASH;
	v->a[91662] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[91663] = anon_sym_DOLLAR_LBRACK;
	v->a[91664] = anon_sym_DOLLAR;
	v->a[91665] = sym__special_character;
	v->a[91666] = anon_sym_DQUOTE;
	v->a[91667] = sym_raw_string;
	v->a[91668] = sym_ansi_c_string;
	v->a[91669] = aux_sym_number_token1;
	v->a[91670] = aux_sym_number_token2;
	v->a[91671] = anon_sym_DOLLAR_LBRACE;
	v->a[91672] = anon_sym_DOLLAR_LPAREN;
	v->a[91673] = anon_sym_BQUOTE;
	v->a[91674] = anon_sym_DOLLAR_BQUOTE;
	v->a[91675] = anon_sym_LT_LPAREN;
	v->a[91676] = anon_sym_GT_LPAREN;
	v->a[91677] = aux_sym__simple_variable_name_token1;
	v->a[91678] = sym_word;
	v->a[91679] = 3;
	small_parse_table_4584(v);
}

void	small_parse_table_4584(t_small_parse_table_array *v)
{
	v->a[91680] = actions(3);
	v->a[91681] = 1;
	v->a[91682] = sym_comment;
	v->a[91683] = actions(1322);
	v->a[91684] = 6;
	v->a[91685] = sym_file_descriptor;
	v->a[91686] = sym__concat;
	v->a[91687] = sym_test_operator;
	v->a[91688] = sym__brace_start;
	v->a[91689] = ts_builtin_sym_end;
	v->a[91690] = aux_sym_heredoc_redirect_token1;
	v->a[91691] = actions(1320);
	v->a[91692] = 38;
	v->a[91693] = anon_sym_LPAREN_LPAREN;
	v->a[91694] = anon_sym_SEMI;
	v->a[91695] = anon_sym_PIPE_PIPE;
	v->a[91696] = anon_sym_AMP_AMP;
	v->a[91697] = anon_sym_PIPE;
	v->a[91698] = anon_sym_AMP;
	v->a[91699] = anon_sym_LT;
	small_parse_table_4585(v);
}

/* EOF small_parse_table_916.c */

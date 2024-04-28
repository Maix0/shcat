/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1056.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5280(t_small_parse_table_array *v)
{
	v->a[105600] = anon_sym_EQ_TILDE;
	v->a[105601] = anon_sym_AMP_GT;
	v->a[105602] = anon_sym_LT_AMP;
	v->a[105603] = anon_sym_GT_AMP;
	v->a[105604] = anon_sym_DOLLAR;
	v->a[105605] = aux_sym_number_token1;
	v->a[105606] = aux_sym_number_token2;
	v->a[105607] = anon_sym_DOLLAR_LPAREN;
	v->a[105608] = anon_sym_BQUOTE;
	v->a[105609] = sym_word;
	v->a[105610] = actions(1326);
	v->a[105611] = 27;
	v->a[105612] = sym_file_descriptor;
	v->a[105613] = sym__concat;
	v->a[105614] = sym_test_operator;
	v->a[105615] = sym__bare_dollar;
	v->a[105616] = sym__brace_start;
	v->a[105617] = anon_sym_LPAREN_LPAREN;
	v->a[105618] = anon_sym_PIPE_PIPE;
	v->a[105619] = anon_sym_AMP_AMP;
	small_parse_table_5281(v);
}

void	small_parse_table_5281(t_small_parse_table_array *v)
{
	v->a[105620] = anon_sym_GT_GT;
	v->a[105621] = anon_sym_PIPE_AMP;
	v->a[105622] = anon_sym_AMP_GT_GT;
	v->a[105623] = anon_sym_GT_PIPE;
	v->a[105624] = anon_sym_LT_AMP_DASH;
	v->a[105625] = anon_sym_GT_AMP_DASH;
	v->a[105626] = anon_sym_LT_LT_DASH;
	v->a[105627] = anon_sym_LT_LT_LT;
	v->a[105628] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[105629] = anon_sym_DOLLAR_LBRACK;
	v->a[105630] = aux_sym_concatenation_token1;
	v->a[105631] = sym__special_character;
	v->a[105632] = anon_sym_DQUOTE;
	v->a[105633] = sym_raw_string;
	v->a[105634] = sym_ansi_c_string;
	v->a[105635] = anon_sym_DOLLAR_LBRACE;
	v->a[105636] = anon_sym_DOLLAR_BQUOTE;
	v->a[105637] = anon_sym_LT_LPAREN;
	v->a[105638] = anon_sym_GT_LPAREN;
	v->a[105639] = 8;
	small_parse_table_5282(v);
}

void	small_parse_table_5282(t_small_parse_table_array *v)
{
	v->a[105640] = actions(3);
	v->a[105641] = 1;
	v->a[105642] = sym_comment;
	v->a[105643] = actions(5826);
	v->a[105644] = 1;
	v->a[105645] = aux_sym_heredoc_redirect_token1;
	v->a[105646] = actions(5828);
	v->a[105647] = 1;
	v->a[105648] = sym_file_descriptor;
	v->a[105649] = actions(6154);
	v->a[105650] = 1;
	v->a[105651] = anon_sym_RPAREN;
	v->a[105652] = actions(5831);
	v->a[105653] = 3;
	v->a[105654] = sym_variable_name;
	v->a[105655] = sym_test_operator;
	v->a[105656] = sym__brace_start;
	v->a[105657] = actions(5821);
	v->a[105658] = 9;
	v->a[105659] = anon_sym_SEMI;
	small_parse_table_5283(v);
}

void	small_parse_table_5283(t_small_parse_table_array *v)
{
	v->a[105660] = anon_sym_PIPE_PIPE;
	v->a[105661] = anon_sym_AMP_AMP;
	v->a[105662] = anon_sym_PIPE;
	v->a[105663] = anon_sym_AMP;
	v->a[105664] = anon_sym_LT_LT;
	v->a[105665] = anon_sym_SEMI_SEMI;
	v->a[105666] = anon_sym_PIPE_AMP;
	v->a[105667] = anon_sym_LT_LT_DASH;
	v->a[105668] = actions(5823);
	v->a[105669] = 11;
	v->a[105670] = anon_sym_LT;
	v->a[105671] = anon_sym_GT;
	v->a[105672] = anon_sym_GT_GT;
	v->a[105673] = anon_sym_AMP_GT;
	v->a[105674] = anon_sym_AMP_GT_GT;
	v->a[105675] = anon_sym_LT_AMP;
	v->a[105676] = anon_sym_GT_AMP;
	v->a[105677] = anon_sym_GT_PIPE;
	v->a[105678] = anon_sym_LT_AMP_DASH;
	v->a[105679] = anon_sym_GT_AMP_DASH;
	small_parse_table_5284(v);
}

void	small_parse_table_5284(t_small_parse_table_array *v)
{
	v->a[105680] = anon_sym_LT_LT_LT;
	v->a[105681] = actions(5819);
	v->a[105682] = 17;
	v->a[105683] = anon_sym_LPAREN_LPAREN;
	v->a[105684] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[105685] = anon_sym_DOLLAR_LBRACK;
	v->a[105686] = anon_sym_DOLLAR;
	v->a[105687] = sym__special_character;
	v->a[105688] = anon_sym_DQUOTE;
	v->a[105689] = sym_raw_string;
	v->a[105690] = sym_ansi_c_string;
	v->a[105691] = aux_sym_number_token1;
	v->a[105692] = aux_sym_number_token2;
	v->a[105693] = anon_sym_DOLLAR_LBRACE;
	v->a[105694] = anon_sym_DOLLAR_LPAREN;
	v->a[105695] = anon_sym_BQUOTE;
	v->a[105696] = anon_sym_DOLLAR_BQUOTE;
	v->a[105697] = anon_sym_LT_LPAREN;
	v->a[105698] = anon_sym_GT_LPAREN;
	v->a[105699] = sym_word;
	small_parse_table_5285(v);
}

/* EOF small_parse_table_1056.c */

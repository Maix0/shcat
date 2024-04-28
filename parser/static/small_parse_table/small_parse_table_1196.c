/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1196.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5980(t_small_parse_table_array *v)
{
	v->a[119600] = anon_sym_DOLLAR_BQUOTE;
	v->a[119601] = anon_sym_LT_LPAREN;
	v->a[119602] = anon_sym_GT_LPAREN;
	v->a[119603] = 5;
	v->a[119604] = actions(3);
	v->a[119605] = 1;
	v->a[119606] = sym_comment;
	v->a[119607] = actions(5932);
	v->a[119608] = 2;
	v->a[119609] = sym_file_descriptor;
	v->a[119610] = aux_sym_heredoc_redirect_token1;
	v->a[119611] = actions(4261);
	v->a[119612] = 3;
	v->a[119613] = sym_variable_name;
	v->a[119614] = sym_test_operator;
	v->a[119615] = sym__brace_start;
	v->a[119616] = actions(4247);
	v->a[119617] = 17;
	v->a[119618] = anon_sym_LPAREN_LPAREN;
	v->a[119619] = anon_sym_LT_LT_LT;
	small_parse_table_5981(v);
}

void	small_parse_table_5981(t_small_parse_table_array *v)
{
	v->a[119620] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[119621] = anon_sym_DOLLAR_LBRACK;
	v->a[119622] = anon_sym_DOLLAR;
	v->a[119623] = sym__special_character;
	v->a[119624] = anon_sym_DQUOTE;
	v->a[119625] = sym_raw_string;
	v->a[119626] = sym_ansi_c_string;
	v->a[119627] = aux_sym_number_token1;
	v->a[119628] = aux_sym_number_token2;
	v->a[119629] = anon_sym_DOLLAR_LBRACE;
	v->a[119630] = anon_sym_DOLLAR_LPAREN;
	v->a[119631] = anon_sym_DOLLAR_BQUOTE;
	v->a[119632] = anon_sym_LT_LPAREN;
	v->a[119633] = anon_sym_GT_LPAREN;
	v->a[119634] = sym_word;
	v->a[119635] = actions(5930);
	v->a[119636] = 20;
	v->a[119637] = anon_sym_SEMI;
	v->a[119638] = anon_sym_PIPE_PIPE;
	v->a[119639] = anon_sym_AMP_AMP;
	small_parse_table_5982(v);
}

void	small_parse_table_5982(t_small_parse_table_array *v)
{
	v->a[119640] = anon_sym_PIPE;
	v->a[119641] = anon_sym_AMP;
	v->a[119642] = anon_sym_LT;
	v->a[119643] = anon_sym_GT;
	v->a[119644] = anon_sym_LT_LT;
	v->a[119645] = anon_sym_GT_GT;
	v->a[119646] = anon_sym_SEMI_SEMI;
	v->a[119647] = anon_sym_PIPE_AMP;
	v->a[119648] = anon_sym_AMP_GT;
	v->a[119649] = anon_sym_AMP_GT_GT;
	v->a[119650] = anon_sym_LT_AMP;
	v->a[119651] = anon_sym_GT_AMP;
	v->a[119652] = anon_sym_GT_PIPE;
	v->a[119653] = anon_sym_LT_AMP_DASH;
	v->a[119654] = anon_sym_GT_AMP_DASH;
	v->a[119655] = anon_sym_LT_LT_DASH;
	v->a[119656] = anon_sym_BQUOTE;
	v->a[119657] = 3;
	v->a[119658] = actions(71);
	v->a[119659] = 1;
	small_parse_table_5983(v);
}

void	small_parse_table_5983(t_small_parse_table_array *v)
{
	v->a[119660] = sym_comment;
	v->a[119661] = actions(1308);
	v->a[119662] = 15;
	v->a[119663] = anon_sym_PIPE;
	v->a[119664] = anon_sym_EQ_EQ;
	v->a[119665] = anon_sym_LT;
	v->a[119666] = anon_sym_GT;
	v->a[119667] = anon_sym_LT_LT;
	v->a[119668] = anon_sym_EQ_TILDE;
	v->a[119669] = anon_sym_AMP_GT;
	v->a[119670] = anon_sym_LT_AMP;
	v->a[119671] = anon_sym_GT_AMP;
	v->a[119672] = anon_sym_DOLLAR;
	v->a[119673] = aux_sym_number_token1;
	v->a[119674] = aux_sym_number_token2;
	v->a[119675] = anon_sym_DOLLAR_LPAREN;
	v->a[119676] = anon_sym_BQUOTE;
	v->a[119677] = sym_word;
	v->a[119678] = actions(1310);
	v->a[119679] = 27;
	small_parse_table_5984(v);
}

void	small_parse_table_5984(t_small_parse_table_array *v)
{
	v->a[119680] = sym_file_descriptor;
	v->a[119681] = sym__concat;
	v->a[119682] = sym_test_operator;
	v->a[119683] = sym__bare_dollar;
	v->a[119684] = sym__brace_start;
	v->a[119685] = anon_sym_LPAREN_LPAREN;
	v->a[119686] = anon_sym_PIPE_PIPE;
	v->a[119687] = anon_sym_AMP_AMP;
	v->a[119688] = anon_sym_GT_GT;
	v->a[119689] = anon_sym_PIPE_AMP;
	v->a[119690] = anon_sym_AMP_GT_GT;
	v->a[119691] = anon_sym_GT_PIPE;
	v->a[119692] = anon_sym_LT_AMP_DASH;
	v->a[119693] = anon_sym_GT_AMP_DASH;
	v->a[119694] = anon_sym_LT_LT_DASH;
	v->a[119695] = anon_sym_LT_LT_LT;
	v->a[119696] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[119697] = anon_sym_DOLLAR_LBRACK;
	v->a[119698] = aux_sym_concatenation_token1;
	v->a[119699] = sym__special_character;
	small_parse_table_5985(v);
}

/* EOF small_parse_table_1196.c */

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
	v->a[119600] = sym_string;
	v->a[119601] = sym_number;
	v->a[119602] = sym_simple_expansion;
	v->a[119603] = sym_expansion;
	v->a[119604] = sym_command_substitution;
	v->a[119605] = 16;
	v->a[119606] = actions(3);
	v->a[119607] = 1;
	v->a[119608] = sym_comment;
	v->a[119609] = actions(2362);
	v->a[119610] = 1;
	v->a[119611] = aux_sym_number_token1;
	v->a[119612] = actions(2364);
	v->a[119613] = 1;
	v->a[119614] = aux_sym_number_token2;
	v->a[119615] = actions(2368);
	v->a[119616] = 1;
	v->a[119617] = anon_sym_DOLLAR_LPAREN;
	v->a[119618] = actions(2376);
	v->a[119619] = 1;
	small_parse_table_5981(v);
}

void	small_parse_table_5981(t_small_parse_table_array *v)
{
	v->a[119620] = sym__brace_start;
	v->a[119621] = actions(6811);
	v->a[119622] = 1;
	v->a[119623] = sym_word;
	v->a[119624] = actions(6813);
	v->a[119625] = 1;
	v->a[119626] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[119627] = actions(6815);
	v->a[119628] = 1;
	v->a[119629] = sym__special_character;
	v->a[119630] = actions(6817);
	v->a[119631] = 1;
	v->a[119632] = anon_sym_DQUOTE;
	v->a[119633] = actions(6821);
	v->a[119634] = 1;
	v->a[119635] = anon_sym_DOLLAR_LBRACE;
	v->a[119636] = actions(6823);
	v->a[119637] = 1;
	v->a[119638] = anon_sym_BQUOTE;
	v->a[119639] = actions(6825);
	small_parse_table_5982(v);
}

void	small_parse_table_5982(t_small_parse_table_array *v)
{
	v->a[119640] = 1;
	v->a[119641] = anon_sym_DOLLAR_BQUOTE;
	v->a[119642] = actions(6827);
	v->a[119643] = 1;
	v->a[119644] = sym__comment_word;
	v->a[119645] = actions(6987);
	v->a[119646] = 1;
	v->a[119647] = anon_sym_DOLLAR;
	v->a[119648] = actions(6819);
	v->a[119649] = 3;
	v->a[119650] = sym_test_operator;
	v->a[119651] = sym__bare_dollar;
	v->a[119652] = sym_raw_string;
	v->a[119653] = state(2035);
	v->a[119654] = 7;
	v->a[119655] = sym_arithmetic_expansion;
	v->a[119656] = sym_brace_expression;
	v->a[119657] = sym_string;
	v->a[119658] = sym_number;
	v->a[119659] = sym_simple_expansion;
	small_parse_table_5983(v);
}

void	small_parse_table_5983(t_small_parse_table_array *v)
{
	v->a[119660] = sym_expansion;
	v->a[119661] = sym_command_substitution;
	v->a[119662] = 5;
	v->a[119663] = actions(3);
	v->a[119664] = 1;
	v->a[119665] = sym_comment;
	v->a[119666] = state(2406);
	v->a[119667] = 1;
	v->a[119668] = aux_sym_pipeline_repeat1;
	v->a[119669] = actions(6989);
	v->a[119670] = 2;
	v->a[119671] = anon_sym_PIPE;
	v->a[119672] = anon_sym_PIPE_AMP;
	v->a[119673] = actions(5439);
	v->a[119674] = 3;
	v->a[119675] = sym_file_descriptor;
	v->a[119676] = ts_builtin_sym_end;
	v->a[119677] = aux_sym_heredoc_redirect_token1;
	v->a[119678] = actions(5435);
	v->a[119679] = 17;
	small_parse_table_5984(v);
}

void	small_parse_table_5984(t_small_parse_table_array *v)
{
	v->a[119680] = anon_sym_SEMI_SEMI;
	v->a[119681] = anon_sym_AMP_AMP;
	v->a[119682] = anon_sym_PIPE_PIPE;
	v->a[119683] = anon_sym_LT;
	v->a[119684] = anon_sym_GT;
	v->a[119685] = anon_sym_GT_GT;
	v->a[119686] = anon_sym_AMP_GT;
	v->a[119687] = anon_sym_AMP_GT_GT;
	v->a[119688] = anon_sym_LT_AMP;
	v->a[119689] = anon_sym_GT_AMP;
	v->a[119690] = anon_sym_GT_PIPE;
	v->a[119691] = anon_sym_LT_AMP_DASH;
	v->a[119692] = anon_sym_GT_AMP_DASH;
	v->a[119693] = anon_sym_LT_LT;
	v->a[119694] = anon_sym_LT_LT_DASH;
	v->a[119695] = anon_sym_AMP;
	v->a[119696] = anon_sym_SEMI;
	v->a[119697] = 16;
	v->a[119698] = actions(3);
	v->a[119699] = 1;
	small_parse_table_5985(v);
}

/* EOF small_parse_table_1196.c */

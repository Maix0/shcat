/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2176.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10880(t_small_parse_table_array *v)
{
	v->a[217600] = 2;
	v->a[217601] = anon_sym_LT_LPAREN;
	v->a[217602] = anon_sym_GT_LPAREN;
	v->a[217603] = actions(9876);
	v->a[217604] = 2;
	v->a[217605] = sym_test_operator;
	v->a[217606] = sym__special_character;
	v->a[217607] = actions(9878);
	v->a[217608] = 3;
	v->a[217609] = sym__bare_dollar;
	v->a[217610] = sym_raw_string;
	v->a[217611] = sym_ansi_c_string;
	v->a[217612] = state(4337);
	v->a[217613] = 9;
	v->a[217614] = sym_arithmetic_expansion;
	v->a[217615] = sym_brace_expression;
	v->a[217616] = sym_string;
	v->a[217617] = sym_translated_string;
	v->a[217618] = sym_number;
	v->a[217619] = sym_simple_expansion;
	small_parse_table_10881(v);
}

void	small_parse_table_10881(t_small_parse_table_array *v)
{
	v->a[217620] = sym_expansion;
	v->a[217621] = sym_command_substitution;
	v->a[217622] = sym_process_substitution;
	v->a[217623] = 18;
	v->a[217624] = actions(3);
	v->a[217625] = 1;
	v->a[217626] = sym_comment;
	v->a[217627] = actions(3793);
	v->a[217628] = 1;
	v->a[217629] = aux_sym_number_token1;
	v->a[217630] = actions(3795);
	v->a[217631] = 1;
	v->a[217632] = aux_sym_number_token2;
	v->a[217633] = actions(3799);
	v->a[217634] = 1;
	v->a[217635] = anon_sym_DOLLAR_LPAREN;
	v->a[217636] = actions(3809);
	v->a[217637] = 1;
	v->a[217638] = sym__brace_start;
	v->a[217639] = actions(9636);
	small_parse_table_10882(v);
}

void	small_parse_table_10882(t_small_parse_table_array *v)
{
	v->a[217640] = 1;
	v->a[217641] = anon_sym_DOLLAR_LBRACK;
	v->a[217642] = actions(9640);
	v->a[217643] = 1;
	v->a[217644] = anon_sym_DQUOTE;
	v->a[217645] = actions(9644);
	v->a[217646] = 1;
	v->a[217647] = anon_sym_DOLLAR_LBRACE;
	v->a[217648] = actions(9646);
	v->a[217649] = 1;
	v->a[217650] = anon_sym_BQUOTE;
	v->a[217651] = actions(9648);
	v->a[217652] = 1;
	v->a[217653] = anon_sym_DOLLAR_BQUOTE;
	v->a[217654] = actions(9872);
	v->a[217655] = 1;
	v->a[217656] = sym_word;
	v->a[217657] = actions(9880);
	v->a[217658] = 1;
	v->a[217659] = sym__comment_word;
	small_parse_table_10883(v);
}

void	small_parse_table_10883(t_small_parse_table_array *v)
{
	v->a[217660] = actions(10376);
	v->a[217661] = 1;
	v->a[217662] = anon_sym_DOLLAR;
	v->a[217663] = actions(9634);
	v->a[217664] = 2;
	v->a[217665] = anon_sym_LPAREN_LPAREN;
	v->a[217666] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[217667] = actions(9650);
	v->a[217668] = 2;
	v->a[217669] = anon_sym_LT_LPAREN;
	v->a[217670] = anon_sym_GT_LPAREN;
	v->a[217671] = actions(9876);
	v->a[217672] = 2;
	v->a[217673] = sym_test_operator;
	v->a[217674] = sym__special_character;
	v->a[217675] = actions(9878);
	v->a[217676] = 3;
	v->a[217677] = sym__bare_dollar;
	v->a[217678] = sym_raw_string;
	v->a[217679] = sym_ansi_c_string;
	small_parse_table_10884(v);
}

void	small_parse_table_10884(t_small_parse_table_array *v)
{
	v->a[217680] = state(4337);
	v->a[217681] = 9;
	v->a[217682] = sym_arithmetic_expansion;
	v->a[217683] = sym_brace_expression;
	v->a[217684] = sym_string;
	v->a[217685] = sym_translated_string;
	v->a[217686] = sym_number;
	v->a[217687] = sym_simple_expansion;
	v->a[217688] = sym_expansion;
	v->a[217689] = sym_command_substitution;
	v->a[217690] = sym_process_substitution;
	v->a[217691] = 18;
	v->a[217692] = actions(3);
	v->a[217693] = 1;
	v->a[217694] = sym_comment;
	v->a[217695] = actions(4086);
	v->a[217696] = 1;
	v->a[217697] = aux_sym_number_token1;
	v->a[217698] = actions(4088);
	v->a[217699] = 1;
	small_parse_table_10885(v);
}

/* EOF small_parse_table_2176.c */

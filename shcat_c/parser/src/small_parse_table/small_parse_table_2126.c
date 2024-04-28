/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2126.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10630(t_small_parse_table_array *v)
{
	v->a[212600] = actions(9326);
	v->a[212601] = 2;
	v->a[212602] = anon_sym_LT_LPAREN;
	v->a[212603] = anon_sym_GT_LPAREN;
	v->a[212604] = actions(10110);
	v->a[212605] = 2;
	v->a[212606] = sym_raw_string;
	v->a[212607] = sym_ansi_c_string;
	v->a[212608] = state(4673);
	v->a[212609] = 9;
	v->a[212610] = sym_arithmetic_expansion;
	v->a[212611] = sym_brace_expression;
	v->a[212612] = sym_string;
	v->a[212613] = sym_translated_string;
	v->a[212614] = sym_number;
	v->a[212615] = sym_simple_expansion;
	v->a[212616] = sym_expansion;
	v->a[212617] = sym_command_substitution;
	v->a[212618] = sym_process_substitution;
	v->a[212619] = 18;
	small_parse_table_10631(v);
}

void	small_parse_table_10631(t_small_parse_table_array *v)
{
	v->a[212620] = actions(3);
	v->a[212621] = 1;
	v->a[212622] = sym_comment;
	v->a[212623] = actions(3397);
	v->a[212624] = 1;
	v->a[212625] = anon_sym_DOLLAR;
	v->a[212626] = actions(3401);
	v->a[212627] = 1;
	v->a[212628] = aux_sym_number_token1;
	v->a[212629] = actions(3403);
	v->a[212630] = 1;
	v->a[212631] = aux_sym_number_token2;
	v->a[212632] = actions(3407);
	v->a[212633] = 1;
	v->a[212634] = anon_sym_DOLLAR_LPAREN;
	v->a[212635] = actions(3417);
	v->a[212636] = 1;
	v->a[212637] = sym__brace_start;
	v->a[212638] = actions(8926);
	v->a[212639] = 1;
	small_parse_table_10632(v);
}

void	small_parse_table_10632(t_small_parse_table_array *v)
{
	v->a[212640] = anon_sym_DOLLAR_LBRACK;
	v->a[212641] = actions(8930);
	v->a[212642] = 1;
	v->a[212643] = anon_sym_DQUOTE;
	v->a[212644] = actions(8934);
	v->a[212645] = 1;
	v->a[212646] = anon_sym_DOLLAR_LBRACE;
	v->a[212647] = actions(8936);
	v->a[212648] = 1;
	v->a[212649] = anon_sym_BQUOTE;
	v->a[212650] = actions(8938);
	v->a[212651] = 1;
	v->a[212652] = anon_sym_DOLLAR_BQUOTE;
	v->a[212653] = actions(9696);
	v->a[212654] = 1;
	v->a[212655] = sym_word;
	v->a[212656] = actions(9704);
	v->a[212657] = 1;
	v->a[212658] = sym__comment_word;
	v->a[212659] = actions(8924);
	small_parse_table_10633(v);
}

void	small_parse_table_10633(t_small_parse_table_array *v)
{
	v->a[212660] = 2;
	v->a[212661] = anon_sym_LPAREN_LPAREN;
	v->a[212662] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[212663] = actions(8940);
	v->a[212664] = 2;
	v->a[212665] = anon_sym_LT_LPAREN;
	v->a[212666] = anon_sym_GT_LPAREN;
	v->a[212667] = actions(9700);
	v->a[212668] = 2;
	v->a[212669] = sym_test_operator;
	v->a[212670] = sym__special_character;
	v->a[212671] = actions(9702);
	v->a[212672] = 3;
	v->a[212673] = sym__bare_dollar;
	v->a[212674] = sym_raw_string;
	v->a[212675] = sym_ansi_c_string;
	v->a[212676] = state(1851);
	v->a[212677] = 9;
	v->a[212678] = sym_arithmetic_expansion;
	v->a[212679] = sym_brace_expression;
	small_parse_table_10634(v);
}

void	small_parse_table_10634(t_small_parse_table_array *v)
{
	v->a[212680] = sym_string;
	v->a[212681] = sym_translated_string;
	v->a[212682] = sym_number;
	v->a[212683] = sym_simple_expansion;
	v->a[212684] = sym_expansion;
	v->a[212685] = sym_command_substitution;
	v->a[212686] = sym_process_substitution;
	v->a[212687] = 20;
	v->a[212688] = actions(71);
	v->a[212689] = 1;
	v->a[212690] = sym_comment;
	v->a[212691] = actions(4080);
	v->a[212692] = 1;
	v->a[212693] = anon_sym_DOLLAR;
	v->a[212694] = actions(4086);
	v->a[212695] = 1;
	v->a[212696] = aux_sym_number_token1;
	v->a[212697] = actions(4088);
	v->a[212698] = 1;
	v->a[212699] = aux_sym_number_token2;
	small_parse_table_10635(v);
}

/* EOF small_parse_table_2126.c */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2208.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11040(t_small_parse_table_array *v)
{
	v->a[220800] = sym_number;
	v->a[220801] = sym_simple_expansion;
	v->a[220802] = sym_expansion;
	v->a[220803] = sym_command_substitution;
	v->a[220804] = sym_process_substitution;
	v->a[220805] = 18;
	v->a[220806] = actions(3);
	v->a[220807] = 1;
	v->a[220808] = sym_comment;
	v->a[220809] = actions(2869);
	v->a[220810] = 1;
	v->a[220811] = aux_sym_number_token1;
	v->a[220812] = actions(2871);
	v->a[220813] = 1;
	v->a[220814] = aux_sym_number_token2;
	v->a[220815] = actions(2875);
	v->a[220816] = 1;
	v->a[220817] = anon_sym_DOLLAR_LPAREN;
	v->a[220818] = actions(2885);
	v->a[220819] = 1;
	small_parse_table_11041(v);
}

void	small_parse_table_11041(t_small_parse_table_array *v)
{
	v->a[220820] = sym__brace_start;
	v->a[220821] = actions(9940);
	v->a[220822] = 1;
	v->a[220823] = anon_sym_DOLLAR_LBRACK;
	v->a[220824] = actions(9944);
	v->a[220825] = 1;
	v->a[220826] = anon_sym_DQUOTE;
	v->a[220827] = actions(9948);
	v->a[220828] = 1;
	v->a[220829] = anon_sym_DOLLAR_LBRACE;
	v->a[220830] = actions(9950);
	v->a[220831] = 1;
	v->a[220832] = anon_sym_BQUOTE;
	v->a[220833] = actions(9952);
	v->a[220834] = 1;
	v->a[220835] = anon_sym_DOLLAR_BQUOTE;
	v->a[220836] = actions(10382);
	v->a[220837] = 1;
	v->a[220838] = sym_word;
	v->a[220839] = actions(10388);
	small_parse_table_11042(v);
}

void	small_parse_table_11042(t_small_parse_table_array *v)
{
	v->a[220840] = 1;
	v->a[220841] = sym__comment_word;
	v->a[220842] = actions(10574);
	v->a[220843] = 1;
	v->a[220844] = anon_sym_DOLLAR;
	v->a[220845] = actions(9938);
	v->a[220846] = 2;
	v->a[220847] = anon_sym_LPAREN_LPAREN;
	v->a[220848] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[220849] = actions(9954);
	v->a[220850] = 2;
	v->a[220851] = anon_sym_LT_LPAREN;
	v->a[220852] = anon_sym_GT_LPAREN;
	v->a[220853] = actions(10384);
	v->a[220854] = 2;
	v->a[220855] = sym_test_operator;
	v->a[220856] = sym__special_character;
	v->a[220857] = actions(10386);
	v->a[220858] = 3;
	v->a[220859] = sym__bare_dollar;
	small_parse_table_11043(v);
}

void	small_parse_table_11043(t_small_parse_table_array *v)
{
	v->a[220860] = sym_raw_string;
	v->a[220861] = sym_ansi_c_string;
	v->a[220862] = state(4404);
	v->a[220863] = 9;
	v->a[220864] = sym_arithmetic_expansion;
	v->a[220865] = sym_brace_expression;
	v->a[220866] = sym_string;
	v->a[220867] = sym_translated_string;
	v->a[220868] = sym_number;
	v->a[220869] = sym_simple_expansion;
	v->a[220870] = sym_expansion;
	v->a[220871] = sym_command_substitution;
	v->a[220872] = sym_process_substitution;
	v->a[220873] = 18;
	v->a[220874] = actions(3);
	v->a[220875] = 1;
	v->a[220876] = sym_comment;
	v->a[220877] = actions(4151);
	v->a[220878] = 1;
	v->a[220879] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_11044(v);
}

void	small_parse_table_11044(t_small_parse_table_array *v)
{
	v->a[220880] = actions(4157);
	v->a[220881] = 1;
	v->a[220882] = anon_sym_DQUOTE;
	v->a[220883] = actions(4161);
	v->a[220884] = 1;
	v->a[220885] = aux_sym_number_token1;
	v->a[220886] = actions(4163);
	v->a[220887] = 1;
	v->a[220888] = aux_sym_number_token2;
	v->a[220889] = actions(4165);
	v->a[220890] = 1;
	v->a[220891] = anon_sym_DOLLAR_LBRACE;
	v->a[220892] = actions(4167);
	v->a[220893] = 1;
	v->a[220894] = anon_sym_DOLLAR_LPAREN;
	v->a[220895] = actions(4169);
	v->a[220896] = 1;
	v->a[220897] = anon_sym_BQUOTE;
	v->a[220898] = actions(4171);
	v->a[220899] = 1;
	small_parse_table_11045(v);
}

/* EOF small_parse_table_2208.c */

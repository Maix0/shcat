/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1198.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5990(t_small_parse_table_array *v)
{
	v->a[119800] = sym__bare_dollar;
	v->a[119801] = sym_raw_string;
	v->a[119802] = state(1863);
	v->a[119803] = 7;
	v->a[119804] = sym_arithmetic_expansion;
	v->a[119805] = sym_brace_expression;
	v->a[119806] = sym_string;
	v->a[119807] = sym_number;
	v->a[119808] = sym_simple_expansion;
	v->a[119809] = sym_expansion;
	v->a[119810] = sym_command_substitution;
	v->a[119811] = 16;
	v->a[119812] = actions(3);
	v->a[119813] = 1;
	v->a[119814] = sym_comment;
	v->a[119815] = actions(5483);
	v->a[119816] = 1;
	v->a[119817] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[119818] = actions(5489);
	v->a[119819] = 1;
	small_parse_table_5991(v);
}

void	small_parse_table_5991(t_small_parse_table_array *v)
{
	v->a[119820] = anon_sym_DQUOTE;
	v->a[119821] = actions(5493);
	v->a[119822] = 1;
	v->a[119823] = aux_sym_number_token1;
	v->a[119824] = actions(5495);
	v->a[119825] = 1;
	v->a[119826] = aux_sym_number_token2;
	v->a[119827] = actions(5497);
	v->a[119828] = 1;
	v->a[119829] = anon_sym_DOLLAR_LBRACE;
	v->a[119830] = actions(5499);
	v->a[119831] = 1;
	v->a[119832] = anon_sym_DOLLAR_LPAREN;
	v->a[119833] = actions(5501);
	v->a[119834] = 1;
	v->a[119835] = anon_sym_BQUOTE;
	v->a[119836] = actions(5503);
	v->a[119837] = 1;
	v->a[119838] = anon_sym_DOLLAR_BQUOTE;
	v->a[119839] = actions(5509);
	small_parse_table_5992(v);
}

void	small_parse_table_5992(t_small_parse_table_array *v)
{
	v->a[119840] = 1;
	v->a[119841] = sym__brace_start;
	v->a[119842] = actions(6963);
	v->a[119843] = 1;
	v->a[119844] = sym_word;
	v->a[119845] = actions(6965);
	v->a[119846] = 1;
	v->a[119847] = sym__special_character;
	v->a[119848] = actions(6969);
	v->a[119849] = 1;
	v->a[119850] = sym__comment_word;
	v->a[119851] = actions(6995);
	v->a[119852] = 1;
	v->a[119853] = anon_sym_DOLLAR;
	v->a[119854] = actions(6967);
	v->a[119855] = 3;
	v->a[119856] = sym_test_operator;
	v->a[119857] = sym__bare_dollar;
	v->a[119858] = sym_raw_string;
	v->a[119859] = state(1863);
	small_parse_table_5993(v);
}

void	small_parse_table_5993(t_small_parse_table_array *v)
{
	v->a[119860] = 7;
	v->a[119861] = sym_arithmetic_expansion;
	v->a[119862] = sym_brace_expression;
	v->a[119863] = sym_string;
	v->a[119864] = sym_number;
	v->a[119865] = sym_simple_expansion;
	v->a[119866] = sym_expansion;
	v->a[119867] = sym_command_substitution;
	v->a[119868] = 16;
	v->a[119869] = actions(3);
	v->a[119870] = 1;
	v->a[119871] = sym_comment;
	v->a[119872] = actions(3889);
	v->a[119873] = 1;
	v->a[119874] = aux_sym_number_token1;
	v->a[119875] = actions(3891);
	v->a[119876] = 1;
	v->a[119877] = aux_sym_number_token2;
	v->a[119878] = actions(3895);
	v->a[119879] = 1;
	small_parse_table_5994(v);
}

void	small_parse_table_5994(t_small_parse_table_array *v)
{
	v->a[119880] = anon_sym_DOLLAR_LPAREN;
	v->a[119881] = actions(3903);
	v->a[119882] = 1;
	v->a[119883] = sym__brace_start;
	v->a[119884] = actions(6475);
	v->a[119885] = 1;
	v->a[119886] = sym_word;
	v->a[119887] = actions(6477);
	v->a[119888] = 1;
	v->a[119889] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[119890] = actions(6479);
	v->a[119891] = 1;
	v->a[119892] = sym__special_character;
	v->a[119893] = actions(6481);
	v->a[119894] = 1;
	v->a[119895] = anon_sym_DQUOTE;
	v->a[119896] = actions(6485);
	v->a[119897] = 1;
	v->a[119898] = anon_sym_DOLLAR_LBRACE;
	v->a[119899] = actions(6487);
	small_parse_table_5995(v);
}

/* EOF small_parse_table_1198.c */

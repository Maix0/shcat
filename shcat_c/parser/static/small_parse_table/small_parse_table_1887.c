/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1887.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9435(t_small_parse_table_array *v)
{
	v->a[188700] = sym__special_character;
	v->a[188701] = anon_sym_DQUOTE;
	v->a[188702] = sym_raw_string;
	v->a[188703] = sym_ansi_c_string;
	v->a[188704] = anon_sym_DOLLAR_LBRACE;
	v->a[188705] = anon_sym_DOLLAR_BQUOTE;
	v->a[188706] = anon_sym_LT_LPAREN;
	v->a[188707] = anon_sym_GT_LPAREN;
	v->a[188708] = 23;
	v->a[188709] = actions(3);
	v->a[188710] = 1;
	v->a[188711] = sym_comment;
	v->a[188712] = actions(7990);
	v->a[188713] = 1;
	v->a[188714] = sym_word;
	v->a[188715] = actions(7994);
	v->a[188716] = 1;
	v->a[188717] = anon_sym_LPAREN;
	v->a[188718] = actions(7996);
	v->a[188719] = 1;
	small_parse_table_9436(v);
}

void	small_parse_table_9436(t_small_parse_table_array *v)
{
	v->a[188720] = anon_sym_DOLLAR_LBRACK;
	v->a[188721] = actions(7998);
	v->a[188722] = 1;
	v->a[188723] = anon_sym_DOLLAR;
	v->a[188724] = actions(8000);
	v->a[188725] = 1;
	v->a[188726] = sym__special_character;
	v->a[188727] = actions(8002);
	v->a[188728] = 1;
	v->a[188729] = anon_sym_DQUOTE;
	v->a[188730] = actions(8006);
	v->a[188731] = 1;
	v->a[188732] = aux_sym_number_token1;
	v->a[188733] = actions(8008);
	v->a[188734] = 1;
	v->a[188735] = aux_sym_number_token2;
	v->a[188736] = actions(8010);
	v->a[188737] = 1;
	v->a[188738] = anon_sym_DOLLAR_LBRACE;
	v->a[188739] = actions(8012);
	small_parse_table_9437(v);
}

void	small_parse_table_9437(t_small_parse_table_array *v)
{
	v->a[188740] = 1;
	v->a[188741] = anon_sym_DOLLAR_LPAREN;
	v->a[188742] = actions(8014);
	v->a[188743] = 1;
	v->a[188744] = anon_sym_BQUOTE;
	v->a[188745] = actions(8016);
	v->a[188746] = 1;
	v->a[188747] = anon_sym_DOLLAR_BQUOTE;
	v->a[188748] = actions(8020);
	v->a[188749] = 1;
	v->a[188750] = sym__comment_word;
	v->a[188751] = actions(8022);
	v->a[188752] = 1;
	v->a[188753] = sym__empty_value;
	v->a[188754] = actions(8024);
	v->a[188755] = 1;
	v->a[188756] = sym_test_operator;
	v->a[188757] = actions(8026);
	v->a[188758] = 1;
	v->a[188759] = sym__brace_start;
	small_parse_table_9438(v);
}

void	small_parse_table_9438(t_small_parse_table_array *v)
{
	v->a[188760] = state(3536);
	v->a[188761] = 1;
	v->a[188762] = aux_sym__literal_repeat1;
	v->a[188763] = actions(7992);
	v->a[188764] = 2;
	v->a[188765] = anon_sym_LPAREN_LPAREN;
	v->a[188766] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[188767] = actions(8004);
	v->a[188768] = 2;
	v->a[188769] = sym_raw_string;
	v->a[188770] = sym_ansi_c_string;
	v->a[188771] = actions(8018);
	v->a[188772] = 2;
	v->a[188773] = anon_sym_LT_LPAREN;
	v->a[188774] = anon_sym_GT_LPAREN;
	v->a[188775] = state(3601);
	v->a[188776] = 2;
	v->a[188777] = sym_concatenation;
	v->a[188778] = sym_array;
	v->a[188779] = state(3466);
	small_parse_table_9439(v);
}

void	small_parse_table_9439(t_small_parse_table_array *v)
{
	v->a[188780] = 9;
	v->a[188781] = sym_arithmetic_expansion;
	v->a[188782] = sym_brace_expression;
	v->a[188783] = sym_string;
	v->a[188784] = sym_translated_string;
	v->a[188785] = sym_number;
	v->a[188786] = sym_simple_expansion;
	v->a[188787] = sym_expansion;
	v->a[188788] = sym_command_substitution;
	v->a[188789] = sym_process_substitution;
	v->a[188790] = 3;
	v->a[188791] = actions(71);
	v->a[188792] = 1;
	v->a[188793] = sym_comment;
	v->a[188794] = actions(1312);
	v->a[188795] = 11;
	v->a[188796] = anon_sym_LT;
	v->a[188797] = anon_sym_GT;
	v->a[188798] = anon_sym_AMP_GT;
	v->a[188799] = anon_sym_LT_AMP;
	small_parse_table_9440(v);
}

/* EOF small_parse_table_1887.c */

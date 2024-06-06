/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1191.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5955(t_small_parse_table_array *v)
{
	v->a[119100] = actions(6769);
	v->a[119101] = 3;
	v->a[119102] = sym_test_operator;
	v->a[119103] = sym__bare_dollar;
	v->a[119104] = sym_raw_string;
	v->a[119105] = state(1603);
	v->a[119106] = 7;
	v->a[119107] = sym_arithmetic_expansion;
	v->a[119108] = sym_brace_expression;
	v->a[119109] = sym_string;
	v->a[119110] = sym_number;
	v->a[119111] = sym_simple_expansion;
	v->a[119112] = sym_expansion;
	v->a[119113] = sym_command_substitution;
	v->a[119114] = 16;
	v->a[119115] = actions(3);
	v->a[119116] = 1;
	v->a[119117] = sym_comment;
	v->a[119118] = actions(2180);
	v->a[119119] = 1;
	small_parse_table_5956(v);
}

void	small_parse_table_5956(t_small_parse_table_array *v)
{
	v->a[119120] = anon_sym_DOLLAR;
	v->a[119121] = actions(2186);
	v->a[119122] = 1;
	v->a[119123] = aux_sym_number_token1;
	v->a[119124] = actions(2188);
	v->a[119125] = 1;
	v->a[119126] = aux_sym_number_token2;
	v->a[119127] = actions(2192);
	v->a[119128] = 1;
	v->a[119129] = anon_sym_DOLLAR_LPAREN;
	v->a[119130] = actions(2200);
	v->a[119131] = 1;
	v->a[119132] = sym__brace_start;
	v->a[119133] = actions(6503);
	v->a[119134] = 1;
	v->a[119135] = sym_word;
	v->a[119136] = actions(6505);
	v->a[119137] = 1;
	v->a[119138] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[119139] = actions(6509);
	small_parse_table_5957(v);
}

void	small_parse_table_5957(t_small_parse_table_array *v)
{
	v->a[119140] = 1;
	v->a[119141] = sym__special_character;
	v->a[119142] = actions(6511);
	v->a[119143] = 1;
	v->a[119144] = anon_sym_DQUOTE;
	v->a[119145] = actions(6515);
	v->a[119146] = 1;
	v->a[119147] = anon_sym_DOLLAR_LBRACE;
	v->a[119148] = actions(6517);
	v->a[119149] = 1;
	v->a[119150] = anon_sym_BQUOTE;
	v->a[119151] = actions(6519);
	v->a[119152] = 1;
	v->a[119153] = anon_sym_DOLLAR_BQUOTE;
	v->a[119154] = actions(6521);
	v->a[119155] = 1;
	v->a[119156] = sym__comment_word;
	v->a[119157] = actions(6513);
	v->a[119158] = 3;
	v->a[119159] = sym_test_operator;
	small_parse_table_5958(v);
}

void	small_parse_table_5958(t_small_parse_table_array *v)
{
	v->a[119160] = sym__bare_dollar;
	v->a[119161] = sym_raw_string;
	v->a[119162] = state(2085);
	v->a[119163] = 7;
	v->a[119164] = sym_arithmetic_expansion;
	v->a[119165] = sym_brace_expression;
	v->a[119166] = sym_string;
	v->a[119167] = sym_number;
	v->a[119168] = sym_simple_expansion;
	v->a[119169] = sym_expansion;
	v->a[119170] = sym_command_substitution;
	v->a[119171] = 16;
	v->a[119172] = actions(3);
	v->a[119173] = 1;
	v->a[119174] = sym_comment;
	v->a[119175] = actions(1260);
	v->a[119176] = 1;
	v->a[119177] = aux_sym_number_token1;
	v->a[119178] = actions(1262);
	v->a[119179] = 1;
	small_parse_table_5959(v);
}

void	small_parse_table_5959(t_small_parse_table_array *v)
{
	v->a[119180] = aux_sym_number_token2;
	v->a[119181] = actions(1266);
	v->a[119182] = 1;
	v->a[119183] = anon_sym_DOLLAR_LPAREN;
	v->a[119184] = actions(1276);
	v->a[119185] = 1;
	v->a[119186] = sym__brace_start;
	v->a[119187] = actions(6879);
	v->a[119188] = 1;
	v->a[119189] = sym_word;
	v->a[119190] = actions(6881);
	v->a[119191] = 1;
	v->a[119192] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[119193] = actions(6885);
	v->a[119194] = 1;
	v->a[119195] = sym__special_character;
	v->a[119196] = actions(6887);
	v->a[119197] = 1;
	v->a[119198] = anon_sym_DQUOTE;
	v->a[119199] = actions(6891);
	small_parse_table_5960(v);
}

/* EOF small_parse_table_1191.c */

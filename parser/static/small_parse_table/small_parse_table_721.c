/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_721.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3605(t_small_parse_table_array *v)
{
	v->a[72100] = 1;
	v->a[72101] = anon_sym_DOLLAR;
	v->a[72102] = actions(4342);
	v->a[72103] = 1;
	v->a[72104] = sym__special_character;
	v->a[72105] = actions(4344);
	v->a[72106] = 1;
	v->a[72107] = anon_sym_DQUOTE;
	v->a[72108] = actions(4346);
	v->a[72109] = 1;
	v->a[72110] = aux_sym_number_token1;
	v->a[72111] = actions(4348);
	v->a[72112] = 1;
	v->a[72113] = aux_sym_number_token2;
	v->a[72114] = actions(4350);
	v->a[72115] = 1;
	v->a[72116] = anon_sym_DOLLAR_LBRACE;
	v->a[72117] = actions(4352);
	v->a[72118] = 1;
	v->a[72119] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3606(v);
}

void	small_parse_table_3606(t_small_parse_table_array *v)
{
	v->a[72120] = actions(4354);
	v->a[72121] = 1;
	v->a[72122] = anon_sym_BQUOTE;
	v->a[72123] = actions(4356);
	v->a[72124] = 1;
	v->a[72125] = anon_sym_DOLLAR_BQUOTE;
	v->a[72126] = actions(4358);
	v->a[72127] = 1;
	v->a[72128] = sym_test_operator;
	v->a[72129] = actions(4360);
	v->a[72130] = 1;
	v->a[72131] = sym_extglob_pattern;
	v->a[72132] = actions(4362);
	v->a[72133] = 1;
	v->a[72134] = sym__brace_start;
	v->a[72135] = actions(4370);
	v->a[72136] = 1;
	v->a[72137] = anon_sym_esac;
	v->a[72138] = actions(4374);
	v->a[72139] = 1;
	small_parse_table_3607(v);
}

void	small_parse_table_3607(t_small_parse_table_array *v)
{
	v->a[72140] = aux_sym_heredoc_redirect_token1;
	v->a[72141] = state(3393);
	v->a[72142] = 1;
	v->a[72143] = aux_sym__literal_repeat1;
	v->a[72144] = state(3942);
	v->a[72145] = 1;
	v->a[72146] = sym_last_case_item;
	v->a[72147] = actions(4328);
	v->a[72148] = 2;
	v->a[72149] = sym_raw_string;
	v->a[72150] = sym_word;
	v->a[72151] = state(1812);
	v->a[72152] = 2;
	v->a[72153] = sym_case_item;
	v->a[72154] = aux_sym_case_statement_repeat1;
	v->a[72155] = state(3472);
	v->a[72156] = 2;
	v->a[72157] = sym_concatenation;
	v->a[72158] = sym__extglob_blob;
	v->a[72159] = actions(4372);
	small_parse_table_3608(v);
}

void	small_parse_table_3608(t_small_parse_table_array *v)
{
	v->a[72160] = 3;
	v->a[72161] = anon_sym_SEMI_SEMI;
	v->a[72162] = anon_sym_AMP;
	v->a[72163] = anon_sym_SEMI;
	v->a[72164] = state(3295);
	v->a[72165] = 7;
	v->a[72166] = sym_arithmetic_expansion;
	v->a[72167] = sym_brace_expression;
	v->a[72168] = sym_string;
	v->a[72169] = sym_number;
	v->a[72170] = sym_simple_expansion;
	v->a[72171] = sym_expansion;
	v->a[72172] = sym_command_substitution;
	v->a[72173] = 6;
	v->a[72174] = actions(3);
	v->a[72175] = 1;
	v->a[72176] = sym_comment;
	v->a[72177] = actions(828);
	v->a[72178] = 1;
	v->a[72179] = sym_file_descriptor;
	small_parse_table_3609(v);
}

void	small_parse_table_3609(t_small_parse_table_array *v)
{
	v->a[72180] = actions(4324);
	v->a[72181] = 1;
	v->a[72182] = sym_variable_name;
	v->a[72183] = actions(4322);
	v->a[72184] = 2;
	v->a[72185] = aux_sym__simple_variable_name_token1;
	v->a[72186] = aux_sym__multiline_variable_name_token1;
	v->a[72187] = actions(4320);
	v->a[72188] = 9;
	v->a[72189] = anon_sym_BANG;
	v->a[72190] = anon_sym_DASH;
	v->a[72191] = anon_sym_STAR;
	v->a[72192] = anon_sym_QMARK;
	v->a[72193] = anon_sym_DOLLAR;
	v->a[72194] = anon_sym_POUND;
	v->a[72195] = anon_sym_AT;
	v->a[72196] = anon_sym_0;
	v->a[72197] = anon_sym__;
	v->a[72198] = actions(826);
	v->a[72199] = 21;
	small_parse_table_3610(v);
}

/* EOF small_parse_table_721.c */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_941.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4705(t_small_parse_table_array *v)
{
	v->a[94100] = anon_sym_0;
	v->a[94101] = anon_sym__;
	v->a[94102] = actions(3778);
	v->a[94103] = 7;
	v->a[94104] = anon_sym_BANG;
	v->a[94105] = anon_sym_DASH;
	v->a[94106] = anon_sym_STAR;
	v->a[94107] = anon_sym_QMARK;
	v->a[94108] = anon_sym_DOLLAR;
	v->a[94109] = anon_sym_POUND;
	v->a[94110] = anon_sym_AT;
	v->a[94111] = 7;
	v->a[94112] = actions(3);
	v->a[94113] = 1;
	v->a[94114] = sym_comment;
	v->a[94115] = actions(3780);
	v->a[94116] = 1;
	v->a[94117] = aux_sym__simple_variable_name_token1;
	v->a[94118] = actions(3784);
	v->a[94119] = 1;
	small_parse_table_4706(v);
}

void	small_parse_table_4706(t_small_parse_table_array *v)
{
	v->a[94120] = sym_variable_name;
	v->a[94121] = actions(3836);
	v->a[94122] = 1;
	v->a[94123] = anon_sym_RBRACE;
	v->a[94124] = state(2386);
	v->a[94125] = 1;
	v->a[94126] = sym__expansion_body;
	v->a[94127] = actions(3782);
	v->a[94128] = 2;
	v->a[94129] = anon_sym_0;
	v->a[94130] = anon_sym__;
	v->a[94131] = actions(3778);
	v->a[94132] = 7;
	v->a[94133] = anon_sym_BANG;
	v->a[94134] = anon_sym_DASH;
	v->a[94135] = anon_sym_STAR;
	v->a[94136] = anon_sym_QMARK;
	v->a[94137] = anon_sym_DOLLAR;
	v->a[94138] = anon_sym_POUND;
	v->a[94139] = anon_sym_AT;
	small_parse_table_4707(v);
}

void	small_parse_table_4707(t_small_parse_table_array *v)
{
	v->a[94140] = 5;
	v->a[94141] = actions(3);
	v->a[94142] = 1;
	v->a[94143] = sym_comment;
	v->a[94144] = actions(3636);
	v->a[94145] = 1;
	v->a[94146] = sym_string_content;
	v->a[94147] = actions(3640);
	v->a[94148] = 1;
	v->a[94149] = sym_variable_name;
	v->a[94150] = actions(3638);
	v->a[94151] = 2;
	v->a[94152] = aux_sym__simple_variable_name_token1;
	v->a[94153] = aux_sym__multiline_variable_name_token1;
	v->a[94154] = actions(3632);
	v->a[94155] = 9;
	v->a[94156] = anon_sym_BANG;
	v->a[94157] = anon_sym_DASH;
	v->a[94158] = anon_sym_STAR;
	v->a[94159] = anon_sym_QMARK;
	small_parse_table_4708(v);
}

void	small_parse_table_4708(t_small_parse_table_array *v)
{
	v->a[94160] = anon_sym_DOLLAR;
	v->a[94161] = anon_sym_POUND;
	v->a[94162] = anon_sym_AT;
	v->a[94163] = anon_sym_0;
	v->a[94164] = anon_sym__;
	v->a[94165] = 5;
	v->a[94166] = actions(3);
	v->a[94167] = 1;
	v->a[94168] = sym_comment;
	v->a[94169] = actions(3586);
	v->a[94170] = 1;
	v->a[94171] = aux_sym_concatenation_token1;
	v->a[94172] = actions(3590);
	v->a[94173] = 1;
	v->a[94174] = sym__concat;
	v->a[94175] = state(1916);
	v->a[94176] = 1;
	v->a[94177] = aux_sym_concatenation_repeat1;
	v->a[94178] = actions(3838);
	v->a[94179] = 10;
	small_parse_table_4709(v);
}

void	small_parse_table_4709(t_small_parse_table_array *v)
{
	v->a[94180] = aux_sym_heredoc_redirect_token1;
	v->a[94181] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[94182] = anon_sym_DOLLAR;
	v->a[94183] = anon_sym_DQUOTE;
	v->a[94184] = sym_raw_string;
	v->a[94185] = sym_number;
	v->a[94186] = anon_sym_DOLLAR_LBRACE;
	v->a[94187] = anon_sym_DOLLAR_LPAREN;
	v->a[94188] = anon_sym_BQUOTE;
	v->a[94189] = sym_word;
	v->a[94190] = 7;
	v->a[94191] = actions(3);
	v->a[94192] = 1;
	v->a[94193] = sym_comment;
	v->a[94194] = actions(3780);
	v->a[94195] = 1;
	v->a[94196] = aux_sym__simple_variable_name_token1;
	v->a[94197] = actions(3784);
	v->a[94198] = 1;
	v->a[94199] = sym_variable_name;
	small_parse_table_4710(v);
}

/* EOF small_parse_table_941.c */

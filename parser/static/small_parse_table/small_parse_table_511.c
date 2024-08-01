/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_511.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2555(t_small_parse_table_array *v)
{
	v->a[51100] = 1;
	v->a[51101] = sym__expansion_body;
	v->a[51102] = actions(2275);
	v->a[51103] = 6;
	v->a[51104] = anon_sym_BANG;
	v->a[51105] = anon_sym_DASH;
	v->a[51106] = anon_sym_STAR;
	v->a[51107] = anon_sym_QMARK;
	v->a[51108] = anon_sym_DOLLAR;
	v->a[51109] = anon_sym_AT;
	v->a[51110] = 10;
	v->a[51111] = actions(3);
	v->a[51112] = 1;
	v->a[51113] = sym_comment;
	v->a[51114] = actions(2293);
	v->a[51115] = 1;
	v->a[51116] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51117] = actions(2299);
	v->a[51118] = 1;
	v->a[51119] = sym_string_content;
	small_parse_table_2556(v);
}

void	small_parse_table_2556(t_small_parse_table_array *v)
{
	v->a[51120] = actions(2301);
	v->a[51121] = 1;
	v->a[51122] = anon_sym_DOLLAR_LBRACE;
	v->a[51123] = actions(2303);
	v->a[51124] = 1;
	v->a[51125] = anon_sym_DOLLAR_LPAREN;
	v->a[51126] = actions(2305);
	v->a[51127] = 1;
	v->a[51128] = anon_sym_BQUOTE;
	v->a[51129] = actions(2559);
	v->a[51130] = 1;
	v->a[51131] = anon_sym_DOLLAR;
	v->a[51132] = actions(2561);
	v->a[51133] = 1;
	v->a[51134] = anon_sym_DQUOTE;
	v->a[51135] = state(1145);
	v->a[51136] = 1;
	v->a[51137] = aux_sym_string_repeat1;
	v->a[51138] = state(1394);
	v->a[51139] = 4;
	small_parse_table_2557(v);
}

void	small_parse_table_2557(t_small_parse_table_array *v)
{
	v->a[51140] = sym_arithmetic_expansion;
	v->a[51141] = sym_simple_expansion;
	v->a[51142] = sym_expansion;
	v->a[51143] = sym_command_substitution;
	v->a[51144] = 3;
	v->a[51145] = actions(3);
	v->a[51146] = 1;
	v->a[51147] = sym_comment;
	v->a[51148] = actions(869);
	v->a[51149] = 1;
	v->a[51150] = sym_extglob_pattern;
	v->a[51151] = actions(867);
	v->a[51152] = 11;
	v->a[51153] = anon_sym_esac;
	v->a[51154] = anon_sym_LPAREN;
	v->a[51155] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51156] = anon_sym_DOLLAR;
	v->a[51157] = anon_sym_DQUOTE;
	v->a[51158] = sym_raw_string;
	v->a[51159] = sym_number;
	small_parse_table_2558(v);
}

void	small_parse_table_2558(t_small_parse_table_array *v)
{
	v->a[51160] = anon_sym_DOLLAR_LBRACE;
	v->a[51161] = anon_sym_DOLLAR_LPAREN;
	v->a[51162] = anon_sym_BQUOTE;
	v->a[51163] = sym_word;
	v->a[51164] = 6;
	v->a[51165] = actions(3);
	v->a[51166] = 1;
	v->a[51167] = sym_comment;
	v->a[51168] = actions(1890);
	v->a[51169] = 1;
	v->a[51170] = aux_sym_concatenation_token1;
	v->a[51171] = actions(2563);
	v->a[51172] = 1;
	v->a[51173] = sym__concat;
	v->a[51174] = state(766);
	v->a[51175] = 1;
	v->a[51176] = aux_sym_concatenation_repeat1;
	v->a[51177] = actions(921);
	v->a[51178] = 2;
	v->a[51179] = sym_variable_name;
	small_parse_table_2559(v);
}

void	small_parse_table_2559(t_small_parse_table_array *v)
{
	v->a[51180] = aux_sym_heredoc_redirect_token1;
	v->a[51181] = actions(923);
	v->a[51182] = 7;
	v->a[51183] = anon_sym_PIPE;
	v->a[51184] = anon_sym_AMP_AMP;
	v->a[51185] = anon_sym_PIPE_PIPE;
	v->a[51186] = anon_sym_LT;
	v->a[51187] = anon_sym_GT;
	v->a[51188] = anon_sym_GT_GT;
	v->a[51189] = anon_sym_LT_LT;
	v->a[51190] = 10;
	v->a[51191] = actions(3);
	v->a[51192] = 1;
	v->a[51193] = sym_comment;
	v->a[51194] = actions(2565);
	v->a[51195] = 1;
	v->a[51196] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51197] = actions(2568);
	v->a[51198] = 1;
	v->a[51199] = anon_sym_DOLLAR;
	small_parse_table_2560(v);
}

/* EOF small_parse_table_511.c */

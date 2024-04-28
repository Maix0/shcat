/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_241.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1205(t_small_parse_table_array *v)
{
	v->a[24100] = anon_sym_DOLLAR_LBRACK;
	v->a[24101] = sym__special_character;
	v->a[24102] = sym_raw_string;
	v->a[24103] = sym_ansi_c_string;
	v->a[24104] = aux_sym_number_token1;
	v->a[24105] = aux_sym_number_token2;
	v->a[24106] = anon_sym_DOLLAR_LBRACE;
	v->a[24107] = anon_sym_DOLLAR_LPAREN;
	v->a[24108] = anon_sym_BQUOTE;
	v->a[24109] = anon_sym_DOLLAR_BQUOTE;
	v->a[24110] = anon_sym_LT_LPAREN;
	v->a[24111] = anon_sym_GT_LPAREN;
	v->a[24112] = sym_word;
	v->a[24113] = 21;
	v->a[24114] = actions(3);
	v->a[24115] = 1;
	v->a[24116] = sym_comment;
	v->a[24117] = actions(4078);
	v->a[24118] = 1;
	v->a[24119] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_1206(v);
}

void	small_parse_table_1206(t_small_parse_table_array *v)
{
	v->a[24120] = actions(4080);
	v->a[24121] = 1;
	v->a[24122] = anon_sym_DOLLAR;
	v->a[24123] = actions(4084);
	v->a[24124] = 1;
	v->a[24125] = anon_sym_DQUOTE;
	v->a[24126] = actions(4086);
	v->a[24127] = 1;
	v->a[24128] = aux_sym_number_token1;
	v->a[24129] = actions(4088);
	v->a[24130] = 1;
	v->a[24131] = aux_sym_number_token2;
	v->a[24132] = actions(4090);
	v->a[24133] = 1;
	v->a[24134] = anon_sym_DOLLAR_LBRACE;
	v->a[24135] = actions(4092);
	v->a[24136] = 1;
	v->a[24137] = anon_sym_DOLLAR_LPAREN;
	v->a[24138] = actions(4094);
	v->a[24139] = 1;
	small_parse_table_1207(v);
}

void	small_parse_table_1207(t_small_parse_table_array *v)
{
	v->a[24140] = anon_sym_BQUOTE;
	v->a[24141] = actions(4096);
	v->a[24142] = 1;
	v->a[24143] = anon_sym_DOLLAR_BQUOTE;
	v->a[24144] = actions(4102);
	v->a[24145] = 1;
	v->a[24146] = sym__brace_start;
	v->a[24147] = actions(4123);
	v->a[24148] = 1;
	v->a[24149] = sym__special_character;
	v->a[24150] = actions(4125);
	v->a[24151] = 1;
	v->a[24152] = sym_test_operator;
	v->a[24153] = state(4521);
	v->a[24154] = 1;
	v->a[24155] = aux_sym__literal_repeat1;
	v->a[24156] = state(5023);
	v->a[24157] = 1;
	v->a[24158] = sym_concatenation;
	v->a[24159] = actions(4076);
	small_parse_table_1208(v);
}

void	small_parse_table_1208(t_small_parse_table_array *v)
{
	v->a[24160] = 2;
	v->a[24161] = anon_sym_LPAREN_LPAREN;
	v->a[24162] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24163] = actions(4098);
	v->a[24164] = 2;
	v->a[24165] = anon_sym_LT_LPAREN;
	v->a[24166] = anon_sym_GT_LPAREN;
	v->a[24167] = actions(2496);
	v->a[24168] = 3;
	v->a[24169] = sym_file_descriptor;
	v->a[24170] = ts_builtin_sym_end;
	v->a[24171] = aux_sym_heredoc_redirect_token1;
	v->a[24172] = actions(4121);
	v->a[24173] = 3;
	v->a[24174] = sym_raw_string;
	v->a[24175] = sym_ansi_c_string;
	v->a[24176] = sym_word;
	v->a[24177] = state(4705);
	v->a[24178] = 9;
	v->a[24179] = sym_arithmetic_expansion;
	small_parse_table_1209(v);
}

void	small_parse_table_1209(t_small_parse_table_array *v)
{
	v->a[24180] = sym_brace_expression;
	v->a[24181] = sym_string;
	v->a[24182] = sym_translated_string;
	v->a[24183] = sym_number;
	v->a[24184] = sym_simple_expansion;
	v->a[24185] = sym_expansion;
	v->a[24186] = sym_command_substitution;
	v->a[24187] = sym_process_substitution;
	v->a[24188] = actions(2494);
	v->a[24189] = 19;
	v->a[24190] = anon_sym_SEMI;
	v->a[24191] = anon_sym_PIPE_PIPE;
	v->a[24192] = anon_sym_AMP_AMP;
	v->a[24193] = anon_sym_PIPE;
	v->a[24194] = anon_sym_AMP;
	v->a[24195] = anon_sym_LT;
	v->a[24196] = anon_sym_GT;
	v->a[24197] = anon_sym_LT_LT;
	v->a[24198] = anon_sym_GT_GT;
	v->a[24199] = anon_sym_SEMI_SEMI;
	small_parse_table_1210(v);
}

/* EOF small_parse_table_241.c */

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
	v->a[24100] = anon_sym_QMARK;
	v->a[24101] = anon_sym_DOLLAR;
	v->a[24102] = anon_sym_POUND;
	v->a[24103] = anon_sym_AT;
	v->a[24104] = anon_sym_0;
	v->a[24105] = anon_sym__;
	v->a[24106] = actions(810);
	v->a[24107] = 27;
	v->a[24108] = anon_sym_PIPE;
	v->a[24109] = anon_sym_PIPE_AMP;
	v->a[24110] = anon_sym_AMP_AMP;
	v->a[24111] = anon_sym_PIPE_PIPE;
	v->a[24112] = anon_sym_LT;
	v->a[24113] = anon_sym_GT;
	v->a[24114] = anon_sym_GT_GT;
	v->a[24115] = anon_sym_AMP_GT;
	v->a[24116] = anon_sym_AMP_GT_GT;
	v->a[24117] = anon_sym_LT_AMP;
	v->a[24118] = anon_sym_GT_AMP;
	v->a[24119] = anon_sym_GT_PIPE;
	small_parse_table_1206(v);
}

void	small_parse_table_1206(t_small_parse_table_array *v)
{
	v->a[24120] = anon_sym_LT_AMP_DASH;
	v->a[24121] = anon_sym_GT_AMP_DASH;
	v->a[24122] = anon_sym_LT_LT;
	v->a[24123] = anon_sym_LT_LT_DASH;
	v->a[24124] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24125] = sym__special_character;
	v->a[24126] = anon_sym_DQUOTE;
	v->a[24127] = sym_raw_string;
	v->a[24128] = aux_sym_number_token1;
	v->a[24129] = aux_sym_number_token2;
	v->a[24130] = anon_sym_DOLLAR_LBRACE;
	v->a[24131] = anon_sym_DOLLAR_LPAREN;
	v->a[24132] = anon_sym_BQUOTE;
	v->a[24133] = anon_sym_DOLLAR_BQUOTE;
	v->a[24134] = sym_word;
	v->a[24135] = 6;
	v->a[24136] = actions(3);
	v->a[24137] = 1;
	v->a[24138] = sym_comment;
	v->a[24139] = actions(2952);
	small_parse_table_1207(v);
}

void	small_parse_table_1207(t_small_parse_table_array *v)
{
	v->a[24140] = 1;
	v->a[24141] = aux_sym_concatenation_token1;
	v->a[24142] = actions(3145);
	v->a[24143] = 1;
	v->a[24144] = sym__concat;
	v->a[24145] = state(606);
	v->a[24146] = 1;
	v->a[24147] = aux_sym_concatenation_repeat1;
	v->a[24148] = actions(2696);
	v->a[24149] = 5;
	v->a[24150] = sym_file_descriptor;
	v->a[24151] = sym_test_operator;
	v->a[24152] = sym__bare_dollar;
	v->a[24153] = sym__brace_start;
	v->a[24154] = aux_sym_heredoc_redirect_token1;
	v->a[24155] = actions(2694);
	v->a[24156] = 34;
	v->a[24157] = anon_sym_esac;
	v->a[24158] = anon_sym_PIPE;
	v->a[24159] = anon_sym_SEMI_SEMI;
	small_parse_table_1208(v);
}

void	small_parse_table_1208(t_small_parse_table_array *v)
{
	v->a[24160] = anon_sym_SEMI_AMP;
	v->a[24161] = anon_sym_SEMI_SEMI_AMP;
	v->a[24162] = anon_sym_PIPE_AMP;
	v->a[24163] = anon_sym_AMP_AMP;
	v->a[24164] = anon_sym_PIPE_PIPE;
	v->a[24165] = anon_sym_LT;
	v->a[24166] = anon_sym_GT;
	v->a[24167] = anon_sym_GT_GT;
	v->a[24168] = anon_sym_AMP_GT;
	v->a[24169] = anon_sym_AMP_GT_GT;
	v->a[24170] = anon_sym_LT_AMP;
	v->a[24171] = anon_sym_GT_AMP;
	v->a[24172] = anon_sym_GT_PIPE;
	v->a[24173] = anon_sym_LT_AMP_DASH;
	v->a[24174] = anon_sym_GT_AMP_DASH;
	v->a[24175] = anon_sym_LT_LT;
	v->a[24176] = anon_sym_LT_LT_DASH;
	v->a[24177] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24178] = anon_sym_AMP;
	v->a[24179] = anon_sym_DOLLAR;
	small_parse_table_1209(v);
}

void	small_parse_table_1209(t_small_parse_table_array *v)
{
	v->a[24180] = sym__special_character;
	v->a[24181] = anon_sym_DQUOTE;
	v->a[24182] = sym_raw_string;
	v->a[24183] = aux_sym_number_token1;
	v->a[24184] = aux_sym_number_token2;
	v->a[24185] = anon_sym_DOLLAR_LBRACE;
	v->a[24186] = anon_sym_DOLLAR_LPAREN;
	v->a[24187] = anon_sym_BQUOTE;
	v->a[24188] = anon_sym_DOLLAR_BQUOTE;
	v->a[24189] = sym_word;
	v->a[24190] = anon_sym_SEMI;
	v->a[24191] = 3;
	v->a[24192] = actions(3);
	v->a[24193] = 1;
	v->a[24194] = sym_comment;
	v->a[24195] = actions(3062);
	v->a[24196] = 6;
	v->a[24197] = sym_file_descriptor;
	v->a[24198] = sym__concat;
	v->a[24199] = sym_variable_name;
	small_parse_table_1210(v);
}

/* EOF small_parse_table_241.c */

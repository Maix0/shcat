/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_681.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3405(t_small_parse_table_array *v)
{
	v->a[68100] = actions(2717);
	v->a[68101] = 1;
	v->a[68102] = anon_sym_DOLLAR;
	v->a[68103] = actions(2693);
	v->a[68104] = 5;
	v->a[68105] = aux_sym_concatenation_token1;
	v->a[68106] = sym_raw_string;
	v->a[68107] = sym_number;
	v->a[68108] = sym__comment_word;
	v->a[68109] = sym_word;
	v->a[68110] = state(449);
	v->a[68111] = 5;
	v->a[68112] = sym_arithmetic_expansion;
	v->a[68113] = sym_string;
	v->a[68114] = sym_simple_expansion;
	v->a[68115] = sym_expansion;
	v->a[68116] = sym_command_substitution;
	v->a[68117] = 10;
	v->a[68118] = actions(3);
	v->a[68119] = 1;
	small_parse_table_3406(v);
}

void	small_parse_table_3406(t_small_parse_table_array *v)
{
	v->a[68120] = sym_comment;
	v->a[68121] = actions(2611);
	v->a[68122] = 1;
	v->a[68123] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68124] = actions(2615);
	v->a[68125] = 1;
	v->a[68126] = anon_sym_DQUOTE;
	v->a[68127] = actions(2617);
	v->a[68128] = 1;
	v->a[68129] = anon_sym_DOLLAR_LBRACE;
	v->a[68130] = actions(2619);
	v->a[68131] = 1;
	v->a[68132] = anon_sym_DOLLAR_LPAREN;
	v->a[68133] = actions(2621);
	v->a[68134] = 1;
	v->a[68135] = anon_sym_BQUOTE;
	v->a[68136] = actions(2623);
	v->a[68137] = 1;
	v->a[68138] = sym__bare_dollar;
	v->a[68139] = actions(2719);
	small_parse_table_3407(v);
}

void	small_parse_table_3407(t_small_parse_table_array *v)
{
	v->a[68140] = 1;
	v->a[68141] = anon_sym_DOLLAR;
	v->a[68142] = actions(2609);
	v->a[68143] = 5;
	v->a[68144] = aux_sym_concatenation_token1;
	v->a[68145] = sym_raw_string;
	v->a[68146] = sym_number;
	v->a[68147] = sym__comment_word;
	v->a[68148] = sym_word;
	v->a[68149] = state(544);
	v->a[68150] = 5;
	v->a[68151] = sym_arithmetic_expansion;
	v->a[68152] = sym_string;
	v->a[68153] = sym_simple_expansion;
	v->a[68154] = sym_expansion;
	v->a[68155] = sym_command_substitution;
	v->a[68156] = 3;
	v->a[68157] = actions(3);
	v->a[68158] = 1;
	v->a[68159] = sym_comment;
	small_parse_table_3408(v);
}

void	small_parse_table_3408(t_small_parse_table_array *v)
{
	v->a[68160] = actions(2199);
	v->a[68161] = 2;
	v->a[68162] = sym_file_descriptor;
	v->a[68163] = aux_sym_heredoc_redirect_token1;
	v->a[68164] = actions(2201);
	v->a[68165] = 15;
	v->a[68166] = anon_sym_esac;
	v->a[68167] = anon_sym_PIPE;
	v->a[68168] = anon_sym_SEMI_SEMI;
	v->a[68169] = anon_sym_AMP_AMP;
	v->a[68170] = anon_sym_PIPE_PIPE;
	v->a[68171] = anon_sym_LT;
	v->a[68172] = anon_sym_GT;
	v->a[68173] = anon_sym_GT_GT;
	v->a[68174] = anon_sym_LT_AMP;
	v->a[68175] = anon_sym_GT_AMP;
	v->a[68176] = anon_sym_GT_PIPE;
	v->a[68177] = anon_sym_LT_GT;
	v->a[68178] = anon_sym_LT_LT;
	v->a[68179] = anon_sym_LT_LT_DASH;
	small_parse_table_3409(v);
}

void	small_parse_table_3409(t_small_parse_table_array *v)
{
	v->a[68180] = anon_sym_SEMI;
	v->a[68181] = 10;
	v->a[68182] = actions(3);
	v->a[68183] = 1;
	v->a[68184] = sym_comment;
	v->a[68185] = actions(329);
	v->a[68186] = 1;
	v->a[68187] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68188] = actions(333);
	v->a[68189] = 1;
	v->a[68190] = anon_sym_DQUOTE;
	v->a[68191] = actions(337);
	v->a[68192] = 1;
	v->a[68193] = anon_sym_DOLLAR_LBRACE;
	v->a[68194] = actions(339);
	v->a[68195] = 1;
	v->a[68196] = anon_sym_DOLLAR_LPAREN;
	v->a[68197] = actions(341);
	v->a[68198] = 1;
	v->a[68199] = anon_sym_BQUOTE;
	small_parse_table_3410(v);
}

/* EOF small_parse_table_681.c */

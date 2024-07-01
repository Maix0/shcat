/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_321.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1605(t_small_parse_table_array *v)
{
	v->a[32100] = anon_sym_SEMI_SEMI;
	v->a[32101] = anon_sym_AMP_AMP;
	v->a[32102] = anon_sym_PIPE_PIPE;
	v->a[32103] = anon_sym_LT;
	v->a[32104] = anon_sym_GT;
	v->a[32105] = anon_sym_GT_GT;
	v->a[32106] = anon_sym_LT_AMP;
	v->a[32107] = anon_sym_GT_AMP;
	v->a[32108] = anon_sym_GT_PIPE;
	v->a[32109] = anon_sym_LT_AMP_DASH;
	v->a[32110] = anon_sym_GT_AMP_DASH;
	v->a[32111] = anon_sym_LT_LT;
	v->a[32112] = anon_sym_LT_LT_DASH;
	v->a[32113] = aux_sym_heredoc_redirect_token1;
	v->a[32114] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32115] = anon_sym_AMP;
	v->a[32116] = anon_sym_DOLLAR;
	v->a[32117] = anon_sym_DQUOTE;
	v->a[32118] = sym_raw_string;
	v->a[32119] = sym_number;
	small_parse_table_1606(v);
}

void	small_parse_table_1606(t_small_parse_table_array *v)
{
	v->a[32120] = anon_sym_DOLLAR_LBRACE;
	v->a[32121] = anon_sym_DOLLAR_LPAREN;
	v->a[32122] = anon_sym_BQUOTE;
	v->a[32123] = sym_word;
	v->a[32124] = anon_sym_SEMI;
	v->a[32125] = 7;
	v->a[32126] = actions(3);
	v->a[32127] = 1;
	v->a[32128] = sym_comment;
	v->a[32129] = actions(1170);
	v->a[32130] = 1;
	v->a[32131] = aux_sym_concatenation_token1;
	v->a[32132] = actions(1201);
	v->a[32133] = 1;
	v->a[32134] = sym__concat;
	v->a[32135] = actions(1203);
	v->a[32136] = 1;
	v->a[32137] = anon_sym_LPAREN;
	v->a[32138] = state(368);
	v->a[32139] = 1;
	small_parse_table_1607(v);
}

void	small_parse_table_1607(t_small_parse_table_array *v)
{
	v->a[32140] = aux_sym_concatenation_repeat1;
	v->a[32141] = actions(1095);
	v->a[32142] = 2;
	v->a[32143] = sym_file_descriptor;
	v->a[32144] = sym__bare_dollar;
	v->a[32145] = actions(1097);
	v->a[32146] = 27;
	v->a[32147] = anon_sym_esac;
	v->a[32148] = anon_sym_PIPE;
	v->a[32149] = anon_sym_SEMI_SEMI;
	v->a[32150] = anon_sym_AMP_AMP;
	v->a[32151] = anon_sym_PIPE_PIPE;
	v->a[32152] = anon_sym_LT;
	v->a[32153] = anon_sym_GT;
	v->a[32154] = anon_sym_GT_GT;
	v->a[32155] = anon_sym_LT_AMP;
	v->a[32156] = anon_sym_GT_AMP;
	v->a[32157] = anon_sym_GT_PIPE;
	v->a[32158] = anon_sym_LT_AMP_DASH;
	v->a[32159] = anon_sym_GT_AMP_DASH;
	small_parse_table_1608(v);
}

void	small_parse_table_1608(t_small_parse_table_array *v)
{
	v->a[32160] = anon_sym_LT_LT;
	v->a[32161] = anon_sym_LT_LT_DASH;
	v->a[32162] = aux_sym_heredoc_redirect_token1;
	v->a[32163] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32164] = anon_sym_AMP;
	v->a[32165] = anon_sym_DOLLAR;
	v->a[32166] = anon_sym_DQUOTE;
	v->a[32167] = sym_raw_string;
	v->a[32168] = sym_number;
	v->a[32169] = anon_sym_DOLLAR_LBRACE;
	v->a[32170] = anon_sym_DOLLAR_LPAREN;
	v->a[32171] = anon_sym_BQUOTE;
	v->a[32172] = sym_word;
	v->a[32173] = anon_sym_SEMI;
	v->a[32174] = 16;
	v->a[32175] = actions(3);
	v->a[32176] = 1;
	v->a[32177] = sym_comment;
	v->a[32178] = actions(335);
	v->a[32179] = 1;
	small_parse_table_1609(v);
}

void	small_parse_table_1609(t_small_parse_table_array *v)
{
	v->a[32180] = anon_sym_LPAREN;
	v->a[32181] = actions(471);
	v->a[32182] = 1;
	v->a[32183] = sym_file_descriptor;
	v->a[32184] = actions(1116);
	v->a[32185] = 1;
	v->a[32186] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32187] = actions(1118);
	v->a[32188] = 1;
	v->a[32189] = anon_sym_DOLLAR;
	v->a[32190] = actions(1120);
	v->a[32191] = 1;
	v->a[32192] = anon_sym_DQUOTE;
	v->a[32193] = actions(1122);
	v->a[32194] = 1;
	v->a[32195] = anon_sym_DOLLAR_LBRACE;
	v->a[32196] = actions(1124);
	v->a[32197] = 1;
	v->a[32198] = anon_sym_DOLLAR_LPAREN;
	v->a[32199] = actions(1126);
	small_parse_table_1610(v);
}

/* EOF small_parse_table_321.c */

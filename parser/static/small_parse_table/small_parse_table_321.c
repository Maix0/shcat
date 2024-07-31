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
	v->a[32100] = sym_comment;
	v->a[32101] = actions(1266);
	v->a[32102] = 1;
	v->a[32103] = sym_variable_name;
	v->a[32104] = actions(1264);
	v->a[32105] = 2;
	v->a[32106] = aux_sym__simple_variable_name_token1;
	v->a[32107] = aux_sym__multiline_variable_name_token1;
	v->a[32108] = actions(1262);
	v->a[32109] = 8;
	v->a[32110] = anon_sym_BANG;
	v->a[32111] = anon_sym_DASH;
	v->a[32112] = anon_sym_STAR;
	v->a[32113] = anon_sym_QMARK;
	v->a[32114] = anon_sym_DOLLAR;
	v->a[32115] = anon_sym_POUND;
	v->a[32116] = anon_sym_AT;
	v->a[32117] = anon_sym_0;
	v->a[32118] = actions(345);
	v->a[32119] = 16;
	small_parse_table_1606(v);
}

void	small_parse_table_1606(t_small_parse_table_array *v)
{
	v->a[32120] = anon_sym_esac;
	v->a[32121] = anon_sym_PIPE;
	v->a[32122] = anon_sym_SEMI_SEMI;
	v->a[32123] = anon_sym_AMP_AMP;
	v->a[32124] = anon_sym_PIPE_PIPE;
	v->a[32125] = anon_sym_LT;
	v->a[32126] = anon_sym_GT;
	v->a[32127] = anon_sym_GT_GT;
	v->a[32128] = anon_sym_LT_AMP;
	v->a[32129] = anon_sym_GT_AMP;
	v->a[32130] = anon_sym_GT_PIPE;
	v->a[32131] = anon_sym_LT_GT;
	v->a[32132] = anon_sym_LT_LT;
	v->a[32133] = anon_sym_LT_LT_DASH;
	v->a[32134] = aux_sym_heredoc_redirect_token1;
	v->a[32135] = anon_sym_SEMI;
	v->a[32136] = 3;
	v->a[32137] = actions(3);
	v->a[32138] = 1;
	v->a[32139] = sym_comment;
	small_parse_table_1607(v);
}

void	small_parse_table_1607(t_small_parse_table_array *v)
{
	v->a[32140] = actions(441);
	v->a[32141] = 1;
	v->a[32142] = sym__concat;
	v->a[32143] = actions(439);
	v->a[32144] = 26;
	v->a[32145] = anon_sym_PIPE;
	v->a[32146] = anon_sym_RPAREN;
	v->a[32147] = anon_sym_SEMI_SEMI;
	v->a[32148] = anon_sym_AMP_AMP;
	v->a[32149] = anon_sym_PIPE_PIPE;
	v->a[32150] = anon_sym_LT;
	v->a[32151] = anon_sym_GT;
	v->a[32152] = anon_sym_GT_GT;
	v->a[32153] = anon_sym_LT_AMP;
	v->a[32154] = anon_sym_GT_AMP;
	v->a[32155] = anon_sym_GT_PIPE;
	v->a[32156] = anon_sym_LT_GT;
	v->a[32157] = anon_sym_LT_LT;
	v->a[32158] = anon_sym_LT_LT_DASH;
	v->a[32159] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1608(v);
}

void	small_parse_table_1608(t_small_parse_table_array *v)
{
	v->a[32160] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32161] = aux_sym_concatenation_token1;
	v->a[32162] = anon_sym_DOLLAR;
	v->a[32163] = anon_sym_DQUOTE;
	v->a[32164] = sym_raw_string;
	v->a[32165] = sym_number;
	v->a[32166] = anon_sym_DOLLAR_LBRACE;
	v->a[32167] = anon_sym_DOLLAR_LPAREN;
	v->a[32168] = anon_sym_BQUOTE;
	v->a[32169] = sym_word;
	v->a[32170] = anon_sym_SEMI;
	v->a[32171] = 4;
	v->a[32172] = actions(3);
	v->a[32173] = 1;
	v->a[32174] = sym_comment;
	v->a[32175] = actions(1249);
	v->a[32176] = 1;
	v->a[32177] = sym_variable_name;
	v->a[32178] = actions(1268);
	v->a[32179] = 2;
	small_parse_table_1609(v);
}

void	small_parse_table_1609(t_small_parse_table_array *v)
{
	v->a[32180] = anon_sym_esac;
	v->a[32181] = anon_sym_SEMI_SEMI;
	v->a[32182] = actions(1245);
	v->a[32183] = 24;
	v->a[32184] = anon_sym_for;
	v->a[32185] = anon_sym_while;
	v->a[32186] = anon_sym_until;
	v->a[32187] = anon_sym_if;
	v->a[32188] = anon_sym_case;
	v->a[32189] = anon_sym_LPAREN;
	v->a[32190] = anon_sym_LBRACE;
	v->a[32191] = anon_sym_BANG;
	v->a[32192] = anon_sym_LT;
	v->a[32193] = anon_sym_GT;
	v->a[32194] = anon_sym_GT_GT;
	v->a[32195] = anon_sym_LT_AMP;
	v->a[32196] = anon_sym_GT_AMP;
	v->a[32197] = anon_sym_GT_PIPE;
	v->a[32198] = anon_sym_LT_GT;
	v->a[32199] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1610(v);
}

/* EOF small_parse_table_321.c */

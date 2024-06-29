/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_832.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4160(t_small_parse_table_array *v)
{
	v->a[83200] = sym_comment;
	v->a[83201] = actions(2283);
	v->a[83202] = 7;
	v->a[83203] = anon_sym_PIPE;
	v->a[83204] = anon_sym_LT;
	v->a[83205] = anon_sym_GT;
	v->a[83206] = anon_sym_AMP_GT;
	v->a[83207] = anon_sym_LT_AMP;
	v->a[83208] = anon_sym_GT_AMP;
	v->a[83209] = anon_sym_LT_LT;
	v->a[83210] = actions(2281);
	v->a[83211] = 9;
	v->a[83212] = sym_file_descriptor;
	v->a[83213] = anon_sym_AMP_AMP;
	v->a[83214] = anon_sym_PIPE_PIPE;
	v->a[83215] = anon_sym_GT_GT;
	v->a[83216] = anon_sym_AMP_GT_GT;
	v->a[83217] = anon_sym_GT_PIPE;
	v->a[83218] = anon_sym_LT_AMP_DASH;
	v->a[83219] = anon_sym_GT_AMP_DASH;
	small_parse_table_4161(v);
}

void	small_parse_table_4161(t_small_parse_table_array *v)
{
	v->a[83220] = anon_sym_LT_LT_DASH;
	v->a[83221] = 3;
	v->a[83222] = actions(1074);
	v->a[83223] = 1;
	v->a[83224] = sym_comment;
	v->a[83225] = actions(2386);
	v->a[83226] = 7;
	v->a[83227] = anon_sym_PIPE;
	v->a[83228] = anon_sym_LT;
	v->a[83229] = anon_sym_GT;
	v->a[83230] = anon_sym_AMP_GT;
	v->a[83231] = anon_sym_LT_AMP;
	v->a[83232] = anon_sym_GT_AMP;
	v->a[83233] = anon_sym_LT_LT;
	v->a[83234] = actions(2384);
	v->a[83235] = 9;
	v->a[83236] = sym_file_descriptor;
	v->a[83237] = anon_sym_AMP_AMP;
	v->a[83238] = anon_sym_PIPE_PIPE;
	v->a[83239] = anon_sym_GT_GT;
	small_parse_table_4162(v);
}

void	small_parse_table_4162(t_small_parse_table_array *v)
{
	v->a[83240] = anon_sym_AMP_GT_GT;
	v->a[83241] = anon_sym_GT_PIPE;
	v->a[83242] = anon_sym_LT_AMP_DASH;
	v->a[83243] = anon_sym_GT_AMP_DASH;
	v->a[83244] = anon_sym_LT_LT_DASH;
	v->a[83245] = 10;
	v->a[83246] = actions(3);
	v->a[83247] = 1;
	v->a[83248] = sym_comment;
	v->a[83249] = actions(718);
	v->a[83250] = 1;
	v->a[83251] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[83252] = actions(720);
	v->a[83253] = 1;
	v->a[83254] = anon_sym_DOLLAR;
	v->a[83255] = actions(722);
	v->a[83256] = 1;
	v->a[83257] = anon_sym_DQUOTE;
	v->a[83258] = actions(724);
	v->a[83259] = 1;
	small_parse_table_4163(v);
}

void	small_parse_table_4163(t_small_parse_table_array *v)
{
	v->a[83260] = anon_sym_DOLLAR_LBRACE;
	v->a[83261] = actions(726);
	v->a[83262] = 1;
	v->a[83263] = anon_sym_DOLLAR_LPAREN;
	v->a[83264] = actions(728);
	v->a[83265] = 1;
	v->a[83266] = anon_sym_BQUOTE;
	v->a[83267] = state(443);
	v->a[83268] = 2;
	v->a[83269] = sym_concatenation;
	v->a[83270] = aux_sym_for_statement_repeat1;
	v->a[83271] = actions(1278);
	v->a[83272] = 3;
	v->a[83273] = sym_raw_string;
	v->a[83274] = sym_number;
	v->a[83275] = sym_word;
	v->a[83276] = state(827);
	v->a[83277] = 5;
	v->a[83278] = sym_arithmetic_expansion;
	v->a[83279] = sym_string;
	small_parse_table_4164(v);
}

void	small_parse_table_4164(t_small_parse_table_array *v)
{
	v->a[83280] = sym_simple_expansion;
	v->a[83281] = sym_expansion;
	v->a[83282] = sym_command_substitution;
	v->a[83283] = 10;
	v->a[83284] = actions(3);
	v->a[83285] = 1;
	v->a[83286] = sym_comment;
	v->a[83287] = actions(718);
	v->a[83288] = 1;
	v->a[83289] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[83290] = actions(720);
	v->a[83291] = 1;
	v->a[83292] = anon_sym_DOLLAR;
	v->a[83293] = actions(722);
	v->a[83294] = 1;
	v->a[83295] = anon_sym_DQUOTE;
	v->a[83296] = actions(724);
	v->a[83297] = 1;
	v->a[83298] = anon_sym_DOLLAR_LBRACE;
	v->a[83299] = actions(726);
	small_parse_table_4165(v);
}

/* EOF small_parse_table_832.c */

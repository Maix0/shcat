/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_482.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2410(t_small_parse_table_array *v)
{
	v->a[48200] = sym_comment;
	v->a[48201] = actions(109);
	v->a[48202] = 1;
	v->a[48203] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48204] = actions(111);
	v->a[48205] = 1;
	v->a[48206] = anon_sym_DOLLAR;
	v->a[48207] = actions(113);
	v->a[48208] = 1;
	v->a[48209] = anon_sym_DQUOTE;
	v->a[48210] = actions(117);
	v->a[48211] = 1;
	v->a[48212] = anon_sym_DOLLAR_LBRACE;
	v->a[48213] = actions(119);
	v->a[48214] = 1;
	v->a[48215] = anon_sym_DOLLAR_LPAREN;
	v->a[48216] = actions(121);
	v->a[48217] = 1;
	v->a[48218] = anon_sym_BQUOTE;
	v->a[48219] = actions(377);
	small_parse_table_2411(v);
}

void	small_parse_table_2411(t_small_parse_table_array *v)
{
	v->a[48220] = 1;
	v->a[48221] = sym_variable_name;
	v->a[48222] = actions(1068);
	v->a[48223] = 1;
	v->a[48224] = sym_file_descriptor;
	v->a[48225] = state(186);
	v->a[48226] = 1;
	v->a[48227] = sym_command_name;
	v->a[48228] = state(622);
	v->a[48229] = 1;
	v->a[48230] = sym_concatenation;
	v->a[48231] = state(1343);
	v->a[48232] = 1;
	v->a[48233] = sym_file_redirect;
	v->a[48234] = actions(1066);
	v->a[48235] = 2;
	v->a[48236] = anon_sym_LT_AMP_DASH;
	v->a[48237] = anon_sym_GT_AMP_DASH;
	v->a[48238] = state(1100);
	v->a[48239] = 2;
	small_parse_table_2412(v);
}

void	small_parse_table_2412(t_small_parse_table_array *v)
{
	v->a[48240] = sym_variable_assignment;
	v->a[48241] = aux_sym_command_repeat1;
	v->a[48242] = actions(115);
	v->a[48243] = 3;
	v->a[48244] = sym_raw_string;
	v->a[48245] = sym_number;
	v->a[48246] = sym_word;
	v->a[48247] = state(289);
	v->a[48248] = 5;
	v->a[48249] = sym_arithmetic_expansion;
	v->a[48250] = sym_string;
	v->a[48251] = sym_simple_expansion;
	v->a[48252] = sym_expansion;
	v->a[48253] = sym_command_substitution;
	v->a[48254] = actions(1064);
	v->a[48255] = 8;
	v->a[48256] = anon_sym_LT;
	v->a[48257] = anon_sym_GT;
	v->a[48258] = anon_sym_GT_GT;
	v->a[48259] = anon_sym_AMP_GT;
	small_parse_table_2413(v);
}

void	small_parse_table_2413(t_small_parse_table_array *v)
{
	v->a[48260] = anon_sym_AMP_GT_GT;
	v->a[48261] = anon_sym_LT_AMP;
	v->a[48262] = anon_sym_GT_AMP;
	v->a[48263] = anon_sym_GT_PIPE;
	v->a[48264] = 4;
	v->a[48265] = actions(3);
	v->a[48266] = 1;
	v->a[48267] = sym_comment;
	v->a[48268] = actions(1524);
	v->a[48269] = 2;
	v->a[48270] = sym_file_descriptor;
	v->a[48271] = sym_variable_name;
	v->a[48272] = actions(1582);
	v->a[48273] = 2;
	v->a[48274] = anon_sym_RPAREN;
	v->a[48275] = anon_sym_SEMI_SEMI;
	v->a[48276] = actions(1520);
	v->a[48277] = 27;
	v->a[48278] = anon_sym_for;
	v->a[48279] = anon_sym_while;
	small_parse_table_2414(v);
}

void	small_parse_table_2414(t_small_parse_table_array *v)
{
	v->a[48280] = anon_sym_until;
	v->a[48281] = anon_sym_if;
	v->a[48282] = anon_sym_case;
	v->a[48283] = anon_sym_LPAREN;
	v->a[48284] = anon_sym_LBRACE;
	v->a[48285] = anon_sym_BANG;
	v->a[48286] = anon_sym_LT;
	v->a[48287] = anon_sym_GT;
	v->a[48288] = anon_sym_GT_GT;
	v->a[48289] = anon_sym_AMP_GT;
	v->a[48290] = anon_sym_AMP_GT_GT;
	v->a[48291] = anon_sym_LT_AMP;
	v->a[48292] = anon_sym_GT_AMP;
	v->a[48293] = anon_sym_GT_PIPE;
	v->a[48294] = anon_sym_LT_AMP_DASH;
	v->a[48295] = anon_sym_GT_AMP_DASH;
	v->a[48296] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48297] = anon_sym_DOLLAR;
	v->a[48298] = anon_sym_DQUOTE;
	v->a[48299] = sym_raw_string;
	small_parse_table_2415(v);
}

/* EOF small_parse_table_482.c */

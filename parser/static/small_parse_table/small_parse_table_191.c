/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_191.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_955(t_small_parse_table_array *v)
{
	v->a[19100] = 25;
	v->a[19101] = actions(3);
	v->a[19102] = 1;
	v->a[19103] = sym_comment;
	v->a[19104] = actions(9);
	v->a[19105] = 1;
	v->a[19106] = anon_sym_for;
	v->a[19107] = actions(13);
	v->a[19108] = 1;
	v->a[19109] = anon_sym_if;
	v->a[19110] = actions(17);
	v->a[19111] = 1;
	v->a[19112] = anon_sym_LPAREN;
	v->a[19113] = actions(19);
	v->a[19114] = 1;
	v->a[19115] = anon_sym_LBRACE;
	v->a[19116] = actions(59);
	v->a[19117] = 1;
	v->a[19118] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19119] = actions(61);
	small_parse_table_956(v);
}

void	small_parse_table_956(t_small_parse_table_array *v)
{
	v->a[19120] = 1;
	v->a[19121] = anon_sym_DOLLAR;
	v->a[19122] = actions(63);
	v->a[19123] = 1;
	v->a[19124] = anon_sym_DQUOTE;
	v->a[19125] = actions(67);
	v->a[19126] = 1;
	v->a[19127] = anon_sym_DOLLAR_LBRACE;
	v->a[19128] = actions(69);
	v->a[19129] = 1;
	v->a[19130] = anon_sym_DOLLAR_LPAREN;
	v->a[19131] = actions(71);
	v->a[19132] = 1;
	v->a[19133] = anon_sym_BQUOTE;
	v->a[19134] = actions(373);
	v->a[19135] = 1;
	v->a[19136] = sym_file_descriptor;
	v->a[19137] = actions(377);
	v->a[19138] = 1;
	v->a[19139] = sym_variable_name;
	small_parse_table_957(v);
}

void	small_parse_table_957(t_small_parse_table_array *v)
{
	v->a[19140] = state(308);
	v->a[19141] = 1;
	v->a[19142] = sym_command_name;
	v->a[19143] = state(650);
	v->a[19144] = 1;
	v->a[19145] = sym_concatenation;
	v->a[19146] = state(669);
	v->a[19147] = 1;
	v->a[19148] = aux_sym_command_repeat1;
	v->a[19149] = state(712);
	v->a[19150] = 1;
	v->a[19151] = sym_file_redirect;
	v->a[19152] = state(1293);
	v->a[19153] = 1;
	v->a[19154] = sym_variable_assignment;
	v->a[19155] = state(1452);
	v->a[19156] = 1;
	v->a[19157] = aux_sym_redirected_statement_repeat2;
	v->a[19158] = actions(11);
	v->a[19159] = 2;
	small_parse_table_958(v);
}

void	small_parse_table_958(t_small_parse_table_array *v)
{
	v->a[19160] = anon_sym_while;
	v->a[19161] = anon_sym_until;
	v->a[19162] = actions(369);
	v->a[19163] = 2;
	v->a[19164] = anon_sym_LT_AMP_DASH;
	v->a[19165] = anon_sym_GT_AMP_DASH;
	v->a[19166] = actions(371);
	v->a[19167] = 3;
	v->a[19168] = sym_raw_string;
	v->a[19169] = sym_number;
	v->a[19170] = sym_word;
	v->a[19171] = state(711);
	v->a[19172] = 5;
	v->a[19173] = sym_arithmetic_expansion;
	v->a[19174] = sym_string;
	v->a[19175] = sym_simple_expansion;
	v->a[19176] = sym_expansion;
	v->a[19177] = sym_command_substitution;
	v->a[19178] = actions(367);
	v->a[19179] = 6;
	small_parse_table_959(v);
}

void	small_parse_table_959(t_small_parse_table_array *v)
{
	v->a[19180] = anon_sym_LT;
	v->a[19181] = anon_sym_GT;
	v->a[19182] = anon_sym_GT_GT;
	v->a[19183] = anon_sym_LT_AMP;
	v->a[19184] = anon_sym_GT_AMP;
	v->a[19185] = anon_sym_GT_PIPE;
	v->a[19186] = state(1191);
	v->a[19187] = 7;
	v->a[19188] = sym_for_statement;
	v->a[19189] = sym_while_statement;
	v->a[19190] = sym_if_statement;
	v->a[19191] = sym_compound_statement;
	v->a[19192] = sym_subshell;
	v->a[19193] = sym_command;
	v->a[19194] = sym__variable_assignments;
	v->a[19195] = 25;
	v->a[19196] = actions(3);
	v->a[19197] = 1;
	v->a[19198] = sym_comment;
	v->a[19199] = actions(9);
	small_parse_table_960(v);
}

/* EOF small_parse_table_191.c */

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
	v->a[19100] = state(398);
	v->a[19101] = 1;
	v->a[19102] = aux_sym_command_repeat1;
	v->a[19103] = state(527);
	v->a[19104] = 1;
	v->a[19105] = sym_variable_assignment;
	v->a[19106] = state(549);
	v->a[19107] = 1;
	v->a[19108] = sym_concatenation;
	v->a[19109] = state(1039);
	v->a[19110] = 1;
	v->a[19111] = sym_subshell;
	v->a[19112] = state(1065);
	v->a[19113] = 1;
	v->a[19114] = sym_command;
	v->a[19115] = state(1083);
	v->a[19116] = 1;
	v->a[19117] = sym_file_redirect;
	v->a[19118] = actions(31);
	v->a[19119] = 3;
	small_parse_table_956(v);
}

void	small_parse_table_956(t_small_parse_table_array *v)
{
	v->a[19120] = sym_raw_string;
	v->a[19121] = sym_number;
	v->a[19122] = sym_word;
	v->a[19123] = actions(758);
	v->a[19124] = 3;
	v->a[19125] = anon_sym_LT;
	v->a[19126] = anon_sym_GT;
	v->a[19127] = anon_sym_GT_GT;
	v->a[19128] = state(280);
	v->a[19129] = 5;
	v->a[19130] = sym_arithmetic_expansion;
	v->a[19131] = sym_string;
	v->a[19132] = sym_simple_expansion;
	v->a[19133] = sym_expansion;
	v->a[19134] = sym_command_substitution;
	v->a[19135] = 18;
	v->a[19136] = actions(3);
	v->a[19137] = 1;
	v->a[19138] = sym_comment;
	v->a[19139] = actions(776);
	small_parse_table_957(v);
}

void	small_parse_table_957(t_small_parse_table_array *v)
{
	v->a[19140] = 1;
	v->a[19141] = anon_sym_esac;
	v->a[19142] = actions(778);
	v->a[19143] = 1;
	v->a[19144] = anon_sym_LPAREN;
	v->a[19145] = actions(782);
	v->a[19146] = 1;
	v->a[19147] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19148] = actions(784);
	v->a[19149] = 1;
	v->a[19150] = anon_sym_DOLLAR;
	v->a[19151] = actions(786);
	v->a[19152] = 1;
	v->a[19153] = anon_sym_DQUOTE;
	v->a[19154] = actions(788);
	v->a[19155] = 1;
	v->a[19156] = anon_sym_DOLLAR_LBRACE;
	v->a[19157] = actions(790);
	v->a[19158] = 1;
	v->a[19159] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_958(v);
}

void	small_parse_table_958(t_small_parse_table_array *v)
{
	v->a[19160] = actions(792);
	v->a[19161] = 1;
	v->a[19162] = anon_sym_BQUOTE;
	v->a[19163] = actions(794);
	v->a[19164] = 1;
	v->a[19165] = sym_extglob_pattern;
	v->a[19166] = state(507);
	v->a[19167] = 1;
	v->a[19168] = sym_terminator;
	v->a[19169] = state(567);
	v->a[19170] = 1;
	v->a[19171] = aux_sym_case_statement_repeat1;
	v->a[19172] = state(1232);
	v->a[19173] = 1;
	v->a[19174] = sym_case_item;
	v->a[19175] = state(1618);
	v->a[19176] = 1;
	v->a[19177] = sym__case_item_last;
	v->a[19178] = state(1538);
	v->a[19179] = 2;
	small_parse_table_959(v);
}

void	small_parse_table_959(t_small_parse_table_array *v)
{
	v->a[19180] = sym_concatenation;
	v->a[19181] = sym__extglob_blob;
	v->a[19182] = actions(774);
	v->a[19183] = 3;
	v->a[19184] = sym_raw_string;
	v->a[19185] = sym_number;
	v->a[19186] = sym_word;
	v->a[19187] = actions(780);
	v->a[19188] = 3;
	v->a[19189] = anon_sym_SEMI_SEMI;
	v->a[19190] = aux_sym_heredoc_redirect_token1;
	v->a[19191] = anon_sym_SEMI;
	v->a[19192] = state(1468);
	v->a[19193] = 5;
	v->a[19194] = sym_arithmetic_expansion;
	v->a[19195] = sym_string;
	v->a[19196] = sym_simple_expansion;
	v->a[19197] = sym_expansion;
	v->a[19198] = sym_command_substitution;
	v->a[19199] = 5;
	small_parse_table_960(v);
}

/* EOF small_parse_table_191.c */

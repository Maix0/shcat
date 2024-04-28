/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2837.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14185(t_small_parse_table_array *v)
{
	v->a[283700] = sym_raw_string;
	v->a[283701] = sym_ansi_c_string;
	v->a[283702] = aux_sym_number_token1;
	v->a[283703] = aux_sym_number_token2;
	v->a[283704] = anon_sym_DOLLAR_LBRACE;
	v->a[283705] = anon_sym_DOLLAR_LPAREN;
	v->a[283706] = anon_sym_BQUOTE;
	v->a[283707] = anon_sym_DOLLAR_BQUOTE;
	v->a[283708] = anon_sym_LT_LPAREN;
	v->a[283709] = anon_sym_GT_LPAREN;
	v->a[283710] = sym_word;
	v->a[283711] = 5;
	v->a[283712] = actions(71);
	v->a[283713] = 1;
	v->a[283714] = sym_comment;
	v->a[283715] = state(5271);
	v->a[283716] = 1;
	v->a[283717] = aux_sym_concatenation_repeat1;
	v->a[283718] = actions(12622);
	v->a[283719] = 2;
	small_parse_table_14186(v);
}

void	small_parse_table_14186(t_small_parse_table_array *v)
{
	v->a[283720] = sym__concat;
	v->a[283721] = aux_sym_concatenation_token1;
	v->a[283722] = actions(2072);
	v->a[283723] = 7;
	v->a[283724] = anon_sym_PIPE;
	v->a[283725] = anon_sym_LT;
	v->a[283726] = anon_sym_GT;
	v->a[283727] = anon_sym_LT_LT;
	v->a[283728] = anon_sym_AMP_GT;
	v->a[283729] = anon_sym_LT_AMP;
	v->a[283730] = anon_sym_GT_AMP;
	v->a[283731] = actions(2074);
	v->a[283732] = 11;
	v->a[283733] = sym_file_descriptor;
	v->a[283734] = anon_sym_PIPE_PIPE;
	v->a[283735] = anon_sym_AMP_AMP;
	v->a[283736] = anon_sym_GT_GT;
	v->a[283737] = anon_sym_PIPE_AMP;
	v->a[283738] = anon_sym_AMP_GT_GT;
	v->a[283739] = anon_sym_GT_PIPE;
	small_parse_table_14187(v);
}

void	small_parse_table_14187(t_small_parse_table_array *v)
{
	v->a[283740] = anon_sym_LT_AMP_DASH;
	v->a[283741] = anon_sym_GT_AMP_DASH;
	v->a[283742] = anon_sym_LT_LT_DASH;
	v->a[283743] = anon_sym_LT_LT_LT;
	v->a[283744] = 3;
	v->a[283745] = actions(71);
	v->a[283746] = 1;
	v->a[283747] = sym_comment;
	v->a[283748] = actions(12741);
	v->a[283749] = 6;
	v->a[283750] = anon_sym_LPAREN;
	v->a[283751] = anon_sym_DOLLAR;
	v->a[283752] = aux_sym_number_token1;
	v->a[283753] = aux_sym_number_token2;
	v->a[283754] = anon_sym_DOLLAR_LPAREN;
	v->a[283755] = sym_word;
	v->a[283756] = actions(12743);
	v->a[283757] = 15;
	v->a[283758] = sym_test_operator;
	v->a[283759] = sym_extglob_pattern;
	small_parse_table_14188(v);
}

void	small_parse_table_14188(t_small_parse_table_array *v)
{
	v->a[283760] = sym__brace_start;
	v->a[283761] = anon_sym_LPAREN_LPAREN;
	v->a[283762] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[283763] = anon_sym_DOLLAR_LBRACK;
	v->a[283764] = sym__special_character;
	v->a[283765] = anon_sym_DQUOTE;
	v->a[283766] = sym_raw_string;
	v->a[283767] = sym_ansi_c_string;
	v->a[283768] = anon_sym_DOLLAR_LBRACE;
	v->a[283769] = anon_sym_BQUOTE;
	v->a[283770] = anon_sym_DOLLAR_BQUOTE;
	v->a[283771] = anon_sym_LT_LPAREN;
	v->a[283772] = anon_sym_GT_LPAREN;
	v->a[283773] = 3;
	v->a[283774] = actions(71);
	v->a[283775] = 1;
	v->a[283776] = sym_comment;
	v->a[283777] = actions(12745);
	v->a[283778] = 6;
	v->a[283779] = anon_sym_LPAREN;
	small_parse_table_14189(v);
}

void	small_parse_table_14189(t_small_parse_table_array *v)
{
	v->a[283780] = anon_sym_DOLLAR;
	v->a[283781] = aux_sym_number_token1;
	v->a[283782] = aux_sym_number_token2;
	v->a[283783] = anon_sym_DOLLAR_LPAREN;
	v->a[283784] = sym_word;
	v->a[283785] = actions(12747);
	v->a[283786] = 15;
	v->a[283787] = sym_test_operator;
	v->a[283788] = sym_extglob_pattern;
	v->a[283789] = sym__brace_start;
	v->a[283790] = anon_sym_LPAREN_LPAREN;
	v->a[283791] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[283792] = anon_sym_DOLLAR_LBRACK;
	v->a[283793] = sym__special_character;
	v->a[283794] = anon_sym_DQUOTE;
	v->a[283795] = sym_raw_string;
	v->a[283796] = sym_ansi_c_string;
	v->a[283797] = anon_sym_DOLLAR_LBRACE;
	v->a[283798] = anon_sym_BQUOTE;
	v->a[283799] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_14190(v);
}

/* EOF small_parse_table_2837.c */

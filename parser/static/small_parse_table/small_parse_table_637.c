/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_637.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3185(t_small_parse_table_array *v)
{
	v->a[63700] = sym_case_item;
	v->a[63701] = state(2128);
	v->a[63702] = 1;
	v->a[63703] = sym__case_item_last;
	v->a[63704] = state(2096);
	v->a[63705] = 2;
	v->a[63706] = sym_concatenation;
	v->a[63707] = sym__extglob_blob;
	v->a[63708] = actions(1770);
	v->a[63709] = 3;
	v->a[63710] = sym_raw_string;
	v->a[63711] = sym_number;
	v->a[63712] = sym_word;
	v->a[63713] = state(2001);
	v->a[63714] = 5;
	v->a[63715] = sym_arithmetic_expansion;
	v->a[63716] = sym_string;
	v->a[63717] = sym_simple_expansion;
	v->a[63718] = sym_expansion;
	v->a[63719] = sym_command_substitution;
	small_parse_table_3186(v);
}

void	small_parse_table_3186(t_small_parse_table_array *v)
{
	v->a[63720] = 6;
	v->a[63721] = actions(3);
	v->a[63722] = 1;
	v->a[63723] = sym_comment;
	v->a[63724] = actions(2097);
	v->a[63725] = 1;
	v->a[63726] = aux_sym_concatenation_token1;
	v->a[63727] = actions(2099);
	v->a[63728] = 1;
	v->a[63729] = sym__concat;
	v->a[63730] = state(1166);
	v->a[63731] = 1;
	v->a[63732] = aux_sym_concatenation_repeat1;
	v->a[63733] = actions(1303);
	v->a[63734] = 2;
	v->a[63735] = sym_file_descriptor;
	v->a[63736] = sym_variable_name;
	v->a[63737] = actions(1301);
	v->a[63738] = 17;
	v->a[63739] = anon_sym_LT;
	small_parse_table_3187(v);
}

void	small_parse_table_3187(t_small_parse_table_array *v)
{
	v->a[63740] = anon_sym_GT;
	v->a[63741] = anon_sym_GT_GT;
	v->a[63742] = anon_sym_LT_AMP;
	v->a[63743] = anon_sym_GT_AMP;
	v->a[63744] = anon_sym_GT_PIPE;
	v->a[63745] = anon_sym_LT_AMP_DASH;
	v->a[63746] = anon_sym_GT_AMP_DASH;
	v->a[63747] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63748] = anon_sym_DOLLAR;
	v->a[63749] = anon_sym_DQUOTE;
	v->a[63750] = sym_raw_string;
	v->a[63751] = sym_number;
	v->a[63752] = anon_sym_DOLLAR_LBRACE;
	v->a[63753] = anon_sym_DOLLAR_LPAREN;
	v->a[63754] = anon_sym_BQUOTE;
	v->a[63755] = sym_word;
	v->a[63756] = 3;
	v->a[63757] = actions(3);
	v->a[63758] = 1;
	v->a[63759] = sym_comment;
	small_parse_table_3188(v);
}

void	small_parse_table_3188(t_small_parse_table_array *v)
{
	v->a[63760] = actions(1264);
	v->a[63761] = 4;
	v->a[63762] = sym_file_descriptor;
	v->a[63763] = sym__concat;
	v->a[63764] = sym_variable_name;
	v->a[63765] = aux_sym_heredoc_redirect_token1;
	v->a[63766] = actions(1266);
	v->a[63767] = 18;
	v->a[63768] = anon_sym_esac;
	v->a[63769] = anon_sym_PIPE;
	v->a[63770] = anon_sym_SEMI_SEMI;
	v->a[63771] = anon_sym_AMP_AMP;
	v->a[63772] = anon_sym_PIPE_PIPE;
	v->a[63773] = anon_sym_LT;
	v->a[63774] = anon_sym_GT;
	v->a[63775] = anon_sym_GT_GT;
	v->a[63776] = anon_sym_LT_AMP;
	v->a[63777] = anon_sym_GT_AMP;
	v->a[63778] = anon_sym_GT_PIPE;
	v->a[63779] = anon_sym_LT_AMP_DASH;
	small_parse_table_3189(v);
}

void	small_parse_table_3189(t_small_parse_table_array *v)
{
	v->a[63780] = anon_sym_GT_AMP_DASH;
	v->a[63781] = anon_sym_LT_LT;
	v->a[63782] = anon_sym_LT_LT_DASH;
	v->a[63783] = anon_sym_AMP;
	v->a[63784] = aux_sym_concatenation_token1;
	v->a[63785] = anon_sym_SEMI;
	v->a[63786] = 16;
	v->a[63787] = actions(3);
	v->a[63788] = 1;
	v->a[63789] = sym_comment;
	v->a[63790] = actions(1774);
	v->a[63791] = 1;
	v->a[63792] = anon_sym_LPAREN;
	v->a[63793] = actions(1778);
	v->a[63794] = 1;
	v->a[63795] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63796] = actions(1780);
	v->a[63797] = 1;
	v->a[63798] = anon_sym_DOLLAR;
	v->a[63799] = actions(1782);
	small_parse_table_3190(v);
}

/* EOF small_parse_table_637.c */

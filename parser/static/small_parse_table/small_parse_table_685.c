/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_685.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3425(t_small_parse_table_array *v)
{
	v->a[68500] = anon_sym_GT;
	v->a[68501] = anon_sym_GT_GT;
	v->a[68502] = anon_sym_LT_AMP;
	v->a[68503] = anon_sym_GT_AMP;
	v->a[68504] = anon_sym_GT_PIPE;
	v->a[68505] = anon_sym_LT_AMP_DASH;
	v->a[68506] = anon_sym_GT_AMP_DASH;
	v->a[68507] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68508] = aux_sym_concatenation_token1;
	v->a[68509] = anon_sym_DOLLAR;
	v->a[68510] = anon_sym_DQUOTE;
	v->a[68511] = sym_raw_string;
	v->a[68512] = sym_number;
	v->a[68513] = anon_sym_DOLLAR_LBRACE;
	v->a[68514] = anon_sym_DOLLAR_LPAREN;
	v->a[68515] = anon_sym_BQUOTE;
	v->a[68516] = sym_word;
	v->a[68517] = 3;
	v->a[68518] = actions(3);
	v->a[68519] = 1;
	small_parse_table_3426(v);
}

void	small_parse_table_3426(t_small_parse_table_array *v)
{
	v->a[68520] = sym_comment;
	v->a[68521] = actions(1037);
	v->a[68522] = 3;
	v->a[68523] = sym_file_descriptor;
	v->a[68524] = sym__concat;
	v->a[68525] = sym_variable_name;
	v->a[68526] = actions(1035);
	v->a[68527] = 18;
	v->a[68528] = anon_sym_LT;
	v->a[68529] = anon_sym_GT;
	v->a[68530] = anon_sym_GT_GT;
	v->a[68531] = anon_sym_LT_AMP;
	v->a[68532] = anon_sym_GT_AMP;
	v->a[68533] = anon_sym_GT_PIPE;
	v->a[68534] = anon_sym_LT_AMP_DASH;
	v->a[68535] = anon_sym_GT_AMP_DASH;
	v->a[68536] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68537] = aux_sym_concatenation_token1;
	v->a[68538] = anon_sym_DOLLAR;
	v->a[68539] = anon_sym_DQUOTE;
	small_parse_table_3427(v);
}

void	small_parse_table_3427(t_small_parse_table_array *v)
{
	v->a[68540] = sym_raw_string;
	v->a[68541] = sym_number;
	v->a[68542] = anon_sym_DOLLAR_LBRACE;
	v->a[68543] = anon_sym_DOLLAR_LPAREN;
	v->a[68544] = anon_sym_BQUOTE;
	v->a[68545] = sym_word;
	v->a[68546] = 15;
	v->a[68547] = actions(3);
	v->a[68548] = 1;
	v->a[68549] = sym_comment;
	v->a[68550] = actions(1774);
	v->a[68551] = 1;
	v->a[68552] = anon_sym_LPAREN;
	v->a[68553] = actions(1778);
	v->a[68554] = 1;
	v->a[68555] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68556] = actions(1780);
	v->a[68557] = 1;
	v->a[68558] = anon_sym_DOLLAR;
	v->a[68559] = actions(1782);
	small_parse_table_3428(v);
}

void	small_parse_table_3428(t_small_parse_table_array *v)
{
	v->a[68560] = 1;
	v->a[68561] = anon_sym_DQUOTE;
	v->a[68562] = actions(1784);
	v->a[68563] = 1;
	v->a[68564] = anon_sym_DOLLAR_LBRACE;
	v->a[68565] = actions(1786);
	v->a[68566] = 1;
	v->a[68567] = anon_sym_DOLLAR_LPAREN;
	v->a[68568] = actions(1788);
	v->a[68569] = 1;
	v->a[68570] = anon_sym_BQUOTE;
	v->a[68571] = actions(1790);
	v->a[68572] = 1;
	v->a[68573] = sym_extglob_pattern;
	v->a[68574] = state(1329);
	v->a[68575] = 1;
	v->a[68576] = aux_sym_case_statement_repeat1;
	v->a[68577] = state(1920);
	v->a[68578] = 1;
	v->a[68579] = sym_case_item;
	small_parse_table_3429(v);
}

void	small_parse_table_3429(t_small_parse_table_array *v)
{
	v->a[68580] = state(2235);
	v->a[68581] = 1;
	v->a[68582] = sym__case_item_last;
	v->a[68583] = state(2096);
	v->a[68584] = 2;
	v->a[68585] = sym_concatenation;
	v->a[68586] = sym__extglob_blob;
	v->a[68587] = actions(1770);
	v->a[68588] = 3;
	v->a[68589] = sym_raw_string;
	v->a[68590] = sym_number;
	v->a[68591] = sym_word;
	v->a[68592] = state(2001);
	v->a[68593] = 5;
	v->a[68594] = sym_arithmetic_expansion;
	v->a[68595] = sym_string;
	v->a[68596] = sym_simple_expansion;
	v->a[68597] = sym_expansion;
	v->a[68598] = sym_command_substitution;
	v->a[68599] = 15;
	small_parse_table_3430(v);
}

/* EOF small_parse_table_685.c */

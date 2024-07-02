/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_538.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2690(t_small_parse_table_array *v)
{
	v->a[53800] = actions(717);
	v->a[53801] = 3;
	v->a[53802] = anon_sym_SEMI_SEMI;
	v->a[53803] = anon_sym_AMP;
	v->a[53804] = anon_sym_SEMI;
	v->a[53805] = state(1086);
	v->a[53806] = 3;
	v->a[53807] = sym_file_redirect;
	v->a[53808] = sym_heredoc_redirect;
	v->a[53809] = aux_sym_redirected_statement_repeat1;
	v->a[53810] = actions(1861);
	v->a[53811] = 7;
	v->a[53812] = anon_sym_LT;
	v->a[53813] = anon_sym_GT;
	v->a[53814] = anon_sym_GT_GT;
	v->a[53815] = anon_sym_LT_AMP;
	v->a[53816] = anon_sym_GT_AMP;
	v->a[53817] = anon_sym_GT_PIPE;
	v->a[53818] = anon_sym_LT_GT;
	v->a[53819] = 16;
	small_parse_table_2691(v);
}

void	small_parse_table_2691(t_small_parse_table_array *v)
{
	v->a[53820] = actions(3);
	v->a[53821] = 1;
	v->a[53822] = sym_comment;
	v->a[53823] = actions(1637);
	v->a[53824] = 1;
	v->a[53825] = anon_sym_LPAREN;
	v->a[53826] = actions(1641);
	v->a[53827] = 1;
	v->a[53828] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53829] = actions(1643);
	v->a[53830] = 1;
	v->a[53831] = anon_sym_DOLLAR;
	v->a[53832] = actions(1645);
	v->a[53833] = 1;
	v->a[53834] = anon_sym_DQUOTE;
	v->a[53835] = actions(1647);
	v->a[53836] = 1;
	v->a[53837] = anon_sym_DOLLAR_LBRACE;
	v->a[53838] = actions(1649);
	v->a[53839] = 1;
	small_parse_table_2692(v);
}

void	small_parse_table_2692(t_small_parse_table_array *v)
{
	v->a[53840] = anon_sym_DOLLAR_LPAREN;
	v->a[53841] = actions(1651);
	v->a[53842] = 1;
	v->a[53843] = anon_sym_BQUOTE;
	v->a[53844] = actions(1653);
	v->a[53845] = 1;
	v->a[53846] = sym_extglob_pattern;
	v->a[53847] = actions(1867);
	v->a[53848] = 1;
	v->a[53849] = anon_sym_esac;
	v->a[53850] = state(1018);
	v->a[53851] = 1;
	v->a[53852] = aux_sym_case_statement_repeat1;
	v->a[53853] = state(1713);
	v->a[53854] = 1;
	v->a[53855] = sym_case_item;
	v->a[53856] = state(1971);
	v->a[53857] = 1;
	v->a[53858] = sym__case_item_last;
	v->a[53859] = state(1873);
	small_parse_table_2693(v);
}

void	small_parse_table_2693(t_small_parse_table_array *v)
{
	v->a[53860] = 2;
	v->a[53861] = sym_concatenation;
	v->a[53862] = sym__extglob_blob;
	v->a[53863] = actions(1633);
	v->a[53864] = 3;
	v->a[53865] = sym_raw_string;
	v->a[53866] = sym_number;
	v->a[53867] = sym_word;
	v->a[53868] = state(1806);
	v->a[53869] = 5;
	v->a[53870] = sym_arithmetic_expansion;
	v->a[53871] = sym_string;
	v->a[53872] = sym_simple_expansion;
	v->a[53873] = sym_expansion;
	v->a[53874] = sym_command_substitution;
	v->a[53875] = 16;
	v->a[53876] = actions(3);
	v->a[53877] = 1;
	v->a[53878] = sym_comment;
	v->a[53879] = actions(1637);
	small_parse_table_2694(v);
}

void	small_parse_table_2694(t_small_parse_table_array *v)
{
	v->a[53880] = 1;
	v->a[53881] = anon_sym_LPAREN;
	v->a[53882] = actions(1641);
	v->a[53883] = 1;
	v->a[53884] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53885] = actions(1643);
	v->a[53886] = 1;
	v->a[53887] = anon_sym_DOLLAR;
	v->a[53888] = actions(1645);
	v->a[53889] = 1;
	v->a[53890] = anon_sym_DQUOTE;
	v->a[53891] = actions(1647);
	v->a[53892] = 1;
	v->a[53893] = anon_sym_DOLLAR_LBRACE;
	v->a[53894] = actions(1649);
	v->a[53895] = 1;
	v->a[53896] = anon_sym_DOLLAR_LPAREN;
	v->a[53897] = actions(1651);
	v->a[53898] = 1;
	v->a[53899] = anon_sym_BQUOTE;
	small_parse_table_2695(v);
}

/* EOF small_parse_table_538.c */

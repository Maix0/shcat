/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_638.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3190(t_small_parse_table_array *v)
{
	v->a[63800] = 1;
	v->a[63801] = anon_sym_DQUOTE;
	v->a[63802] = actions(1784);
	v->a[63803] = 1;
	v->a[63804] = anon_sym_DOLLAR_LBRACE;
	v->a[63805] = actions(1786);
	v->a[63806] = 1;
	v->a[63807] = anon_sym_DOLLAR_LPAREN;
	v->a[63808] = actions(1788);
	v->a[63809] = 1;
	v->a[63810] = anon_sym_BQUOTE;
	v->a[63811] = actions(1790);
	v->a[63812] = 1;
	v->a[63813] = sym_extglob_pattern;
	v->a[63814] = actions(2101);
	v->a[63815] = 1;
	v->a[63816] = anon_sym_esac;
	v->a[63817] = state(1316);
	v->a[63818] = 1;
	v->a[63819] = aux_sym_case_statement_repeat1;
	small_parse_table_3191(v);
}

void	small_parse_table_3191(t_small_parse_table_array *v)
{
	v->a[63820] = state(1920);
	v->a[63821] = 1;
	v->a[63822] = sym_case_item;
	v->a[63823] = state(2232);
	v->a[63824] = 1;
	v->a[63825] = sym__case_item_last;
	v->a[63826] = state(2096);
	v->a[63827] = 2;
	v->a[63828] = sym_concatenation;
	v->a[63829] = sym__extglob_blob;
	v->a[63830] = actions(1770);
	v->a[63831] = 3;
	v->a[63832] = sym_raw_string;
	v->a[63833] = sym_number;
	v->a[63834] = sym_word;
	v->a[63835] = state(2001);
	v->a[63836] = 5;
	v->a[63837] = sym_arithmetic_expansion;
	v->a[63838] = sym_string;
	v->a[63839] = sym_simple_expansion;
	small_parse_table_3192(v);
}

void	small_parse_table_3192(t_small_parse_table_array *v)
{
	v->a[63840] = sym_expansion;
	v->a[63841] = sym_command_substitution;
	v->a[63842] = 3;
	v->a[63843] = actions(3);
	v->a[63844] = 1;
	v->a[63845] = sym_comment;
	v->a[63846] = actions(1283);
	v->a[63847] = 4;
	v->a[63848] = sym_file_descriptor;
	v->a[63849] = sym__concat;
	v->a[63850] = sym_variable_name;
	v->a[63851] = aux_sym_heredoc_redirect_token1;
	v->a[63852] = actions(1285);
	v->a[63853] = 18;
	v->a[63854] = anon_sym_esac;
	v->a[63855] = anon_sym_PIPE;
	v->a[63856] = anon_sym_SEMI_SEMI;
	v->a[63857] = anon_sym_AMP_AMP;
	v->a[63858] = anon_sym_PIPE_PIPE;
	v->a[63859] = anon_sym_LT;
	small_parse_table_3193(v);
}

void	small_parse_table_3193(t_small_parse_table_array *v)
{
	v->a[63860] = anon_sym_GT;
	v->a[63861] = anon_sym_GT_GT;
	v->a[63862] = anon_sym_LT_AMP;
	v->a[63863] = anon_sym_GT_AMP;
	v->a[63864] = anon_sym_GT_PIPE;
	v->a[63865] = anon_sym_LT_AMP_DASH;
	v->a[63866] = anon_sym_GT_AMP_DASH;
	v->a[63867] = anon_sym_LT_LT;
	v->a[63868] = anon_sym_LT_LT_DASH;
	v->a[63869] = anon_sym_AMP;
	v->a[63870] = aux_sym_concatenation_token1;
	v->a[63871] = anon_sym_SEMI;
	v->a[63872] = 16;
	v->a[63873] = actions(3);
	v->a[63874] = 1;
	v->a[63875] = sym_comment;
	v->a[63876] = actions(1774);
	v->a[63877] = 1;
	v->a[63878] = anon_sym_LPAREN;
	v->a[63879] = actions(1778);
	small_parse_table_3194(v);
}

void	small_parse_table_3194(t_small_parse_table_array *v)
{
	v->a[63880] = 1;
	v->a[63881] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63882] = actions(1780);
	v->a[63883] = 1;
	v->a[63884] = anon_sym_DOLLAR;
	v->a[63885] = actions(1782);
	v->a[63886] = 1;
	v->a[63887] = anon_sym_DQUOTE;
	v->a[63888] = actions(1784);
	v->a[63889] = 1;
	v->a[63890] = anon_sym_DOLLAR_LBRACE;
	v->a[63891] = actions(1786);
	v->a[63892] = 1;
	v->a[63893] = anon_sym_DOLLAR_LPAREN;
	v->a[63894] = actions(1788);
	v->a[63895] = 1;
	v->a[63896] = anon_sym_BQUOTE;
	v->a[63897] = actions(1790);
	v->a[63898] = 1;
	v->a[63899] = sym_extglob_pattern;
	small_parse_table_3195(v);
}

/* EOF small_parse_table_638.c */

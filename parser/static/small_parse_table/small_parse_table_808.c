/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_808.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4040(t_small_parse_table_array *v)
{
	v->a[80800] = anon_sym_GT_AMP;
	v->a[80801] = anon_sym_GT_PIPE;
	v->a[80802] = anon_sym_LT_AMP_DASH;
	v->a[80803] = anon_sym_GT_AMP_DASH;
	v->a[80804] = anon_sym_LT_LT;
	v->a[80805] = anon_sym_LT_LT_DASH;
	v->a[80806] = anon_sym_AMP;
	v->a[80807] = anon_sym_SEMI;
	v->a[80808] = 3;
	v->a[80809] = actions(3);
	v->a[80810] = 1;
	v->a[80811] = sym_comment;
	v->a[80812] = actions(2757);
	v->a[80813] = 2;
	v->a[80814] = sym_file_descriptor;
	v->a[80815] = aux_sym_heredoc_redirect_token1;
	v->a[80816] = actions(2759);
	v->a[80817] = 19;
	v->a[80818] = anon_sym_esac;
	v->a[80819] = anon_sym_PIPE;
	small_parse_table_4041(v);
}

void	small_parse_table_4041(t_small_parse_table_array *v)
{
	v->a[80820] = anon_sym_SEMI_SEMI;
	v->a[80821] = anon_sym_AMP_AMP;
	v->a[80822] = anon_sym_PIPE_PIPE;
	v->a[80823] = anon_sym_LT;
	v->a[80824] = anon_sym_GT;
	v->a[80825] = anon_sym_GT_GT;
	v->a[80826] = anon_sym_AMP_GT;
	v->a[80827] = anon_sym_AMP_GT_GT;
	v->a[80828] = anon_sym_LT_AMP;
	v->a[80829] = anon_sym_GT_AMP;
	v->a[80830] = anon_sym_GT_PIPE;
	v->a[80831] = anon_sym_LT_AMP_DASH;
	v->a[80832] = anon_sym_GT_AMP_DASH;
	v->a[80833] = anon_sym_LT_LT;
	v->a[80834] = anon_sym_LT_LT_DASH;
	v->a[80835] = anon_sym_AMP;
	v->a[80836] = anon_sym_SEMI;
	v->a[80837] = 15;
	v->a[80838] = actions(3);
	v->a[80839] = 1;
	small_parse_table_4042(v);
}

void	small_parse_table_4042(t_small_parse_table_array *v)
{
	v->a[80840] = sym_comment;
	v->a[80841] = actions(1959);
	v->a[80842] = 1;
	v->a[80843] = anon_sym_LPAREN;
	v->a[80844] = actions(1963);
	v->a[80845] = 1;
	v->a[80846] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80847] = actions(1965);
	v->a[80848] = 1;
	v->a[80849] = anon_sym_DOLLAR;
	v->a[80850] = actions(1967);
	v->a[80851] = 1;
	v->a[80852] = anon_sym_DQUOTE;
	v->a[80853] = actions(1969);
	v->a[80854] = 1;
	v->a[80855] = anon_sym_DOLLAR_LBRACE;
	v->a[80856] = actions(1971);
	v->a[80857] = 1;
	v->a[80858] = anon_sym_DOLLAR_LPAREN;
	v->a[80859] = actions(1973);
	small_parse_table_4043(v);
}

void	small_parse_table_4043(t_small_parse_table_array *v)
{
	v->a[80860] = 1;
	v->a[80861] = anon_sym_BQUOTE;
	v->a[80862] = actions(1975);
	v->a[80863] = 1;
	v->a[80864] = sym_extglob_pattern;
	v->a[80865] = state(1547);
	v->a[80866] = 1;
	v->a[80867] = aux_sym_case_statement_repeat1;
	v->a[80868] = state(2080);
	v->a[80869] = 1;
	v->a[80870] = sym_case_item;
	v->a[80871] = state(2315);
	v->a[80872] = 1;
	v->a[80873] = sym__case_item_last;
	v->a[80874] = state(2224);
	v->a[80875] = 2;
	v->a[80876] = sym_concatenation;
	v->a[80877] = sym__extglob_blob;
	v->a[80878] = actions(1955);
	v->a[80879] = 3;
	small_parse_table_4044(v);
}

void	small_parse_table_4044(t_small_parse_table_array *v)
{
	v->a[80880] = sym_raw_string;
	v->a[80881] = sym_number;
	v->a[80882] = sym_word;
	v->a[80883] = state(2157);
	v->a[80884] = 5;
	v->a[80885] = sym_arithmetic_expansion;
	v->a[80886] = sym_string;
	v->a[80887] = sym_simple_expansion;
	v->a[80888] = sym_expansion;
	v->a[80889] = sym_command_substitution;
	v->a[80890] = 3;
	v->a[80891] = actions(3);
	v->a[80892] = 1;
	v->a[80893] = sym_comment;
	v->a[80894] = actions(2757);
	v->a[80895] = 2;
	v->a[80896] = sym_file_descriptor;
	v->a[80897] = aux_sym_heredoc_redirect_token1;
	v->a[80898] = actions(2759);
	v->a[80899] = 19;
	small_parse_table_4045(v);
}

/* EOF small_parse_table_808.c */

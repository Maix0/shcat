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
	v->a[80800] = aux_sym_concatenation_token1;
	v->a[80801] = sym_raw_string;
	v->a[80802] = sym_number;
	v->a[80803] = sym__comment_word;
	v->a[80804] = sym_word;
	v->a[80805] = state(380);
	v->a[80806] = 5;
	v->a[80807] = sym_arithmetic_expansion;
	v->a[80808] = sym_string;
	v->a[80809] = sym_simple_expansion;
	v->a[80810] = sym_expansion;
	v->a[80811] = sym_command_substitution;
	v->a[80812] = 10;
	v->a[80813] = actions(3);
	v->a[80814] = 1;
	v->a[80815] = sym_comment;
	v->a[80816] = actions(718);
	v->a[80817] = 1;
	v->a[80818] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80819] = actions(722);
	small_parse_table_4041(v);
}

void	small_parse_table_4041(t_small_parse_table_array *v)
{
	v->a[80820] = 1;
	v->a[80821] = anon_sym_DQUOTE;
	v->a[80822] = actions(724);
	v->a[80823] = 1;
	v->a[80824] = anon_sym_DOLLAR_LBRACE;
	v->a[80825] = actions(726);
	v->a[80826] = 1;
	v->a[80827] = anon_sym_DOLLAR_LPAREN;
	v->a[80828] = actions(728);
	v->a[80829] = 1;
	v->a[80830] = anon_sym_BQUOTE;
	v->a[80831] = actions(2977);
	v->a[80832] = 1;
	v->a[80833] = sym__bare_dollar;
	v->a[80834] = actions(3019);
	v->a[80835] = 1;
	v->a[80836] = anon_sym_DOLLAR;
	v->a[80837] = actions(2973);
	v->a[80838] = 5;
	v->a[80839] = aux_sym_concatenation_token1;
	small_parse_table_4042(v);
}

void	small_parse_table_4042(t_small_parse_table_array *v)
{
	v->a[80840] = sym_raw_string;
	v->a[80841] = sym_number;
	v->a[80842] = sym__comment_word;
	v->a[80843] = sym_word;
	v->a[80844] = state(625);
	v->a[80845] = 5;
	v->a[80846] = sym_arithmetic_expansion;
	v->a[80847] = sym_string;
	v->a[80848] = sym_simple_expansion;
	v->a[80849] = sym_expansion;
	v->a[80850] = sym_command_substitution;
	v->a[80851] = 5;
	v->a[80852] = actions(1074);
	v->a[80853] = 1;
	v->a[80854] = sym_comment;
	v->a[80855] = actions(3021);
	v->a[80856] = 1;
	v->a[80857] = anon_sym_PIPE;
	v->a[80858] = state(1544);
	v->a[80859] = 1;
	small_parse_table_4043(v);
}

void	small_parse_table_4043(t_small_parse_table_array *v)
{
	v->a[80860] = aux_sym_pipeline_repeat1;
	v->a[80861] = actions(2191);
	v->a[80862] = 6;
	v->a[80863] = anon_sym_LT;
	v->a[80864] = anon_sym_GT;
	v->a[80865] = anon_sym_AMP_GT;
	v->a[80866] = anon_sym_LT_AMP;
	v->a[80867] = anon_sym_GT_AMP;
	v->a[80868] = anon_sym_LT_LT;
	v->a[80869] = actions(2186);
	v->a[80870] = 9;
	v->a[80871] = sym_file_descriptor;
	v->a[80872] = anon_sym_AMP_AMP;
	v->a[80873] = anon_sym_PIPE_PIPE;
	v->a[80874] = anon_sym_GT_GT;
	v->a[80875] = anon_sym_AMP_GT_GT;
	v->a[80876] = anon_sym_GT_PIPE;
	v->a[80877] = anon_sym_LT_AMP_DASH;
	v->a[80878] = anon_sym_GT_AMP_DASH;
	v->a[80879] = anon_sym_LT_LT_DASH;
	small_parse_table_4044(v);
}

void	small_parse_table_4044(t_small_parse_table_array *v)
{
	v->a[80880] = 10;
	v->a[80881] = actions(3);
	v->a[80882] = 1;
	v->a[80883] = sym_comment;
	v->a[80884] = actions(969);
	v->a[80885] = 1;
	v->a[80886] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80887] = actions(971);
	v->a[80888] = 1;
	v->a[80889] = anon_sym_DOLLAR;
	v->a[80890] = actions(973);
	v->a[80891] = 1;
	v->a[80892] = anon_sym_DQUOTE;
	v->a[80893] = actions(975);
	v->a[80894] = 1;
	v->a[80895] = anon_sym_DOLLAR_LBRACE;
	v->a[80896] = actions(977);
	v->a[80897] = 1;
	v->a[80898] = anon_sym_DOLLAR_LPAREN;
	v->a[80899] = actions(979);
	small_parse_table_4045(v);
}

/* EOF small_parse_table_808.c */

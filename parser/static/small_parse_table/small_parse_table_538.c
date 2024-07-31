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
	v->a[53800] = aux_sym_concatenation_token1;
	v->a[53801] = sym_raw_string;
	v->a[53802] = sym_number;
	v->a[53803] = sym__comment_word;
	v->a[53804] = sym_word;
	v->a[53805] = state(928);
	v->a[53806] = 5;
	v->a[53807] = sym_arithmetic_expansion;
	v->a[53808] = sym_string;
	v->a[53809] = sym_simple_expansion;
	v->a[53810] = sym_expansion;
	v->a[53811] = sym_command_substitution;
	v->a[53812] = 10;
	v->a[53813] = actions(3);
	v->a[53814] = 1;
	v->a[53815] = sym_comment;
	v->a[53816] = actions(886);
	v->a[53817] = 1;
	v->a[53818] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53819] = actions(890);
	small_parse_table_2691(v);
}

void	small_parse_table_2691(t_small_parse_table_array *v)
{
	v->a[53820] = 1;
	v->a[53821] = anon_sym_DQUOTE;
	v->a[53822] = actions(892);
	v->a[53823] = 1;
	v->a[53824] = anon_sym_DOLLAR_LBRACE;
	v->a[53825] = actions(894);
	v->a[53826] = 1;
	v->a[53827] = anon_sym_DOLLAR_LPAREN;
	v->a[53828] = actions(896);
	v->a[53829] = 1;
	v->a[53830] = anon_sym_BQUOTE;
	v->a[53831] = actions(1989);
	v->a[53832] = 1;
	v->a[53833] = sym__bare_dollar;
	v->a[53834] = actions(2045);
	v->a[53835] = 1;
	v->a[53836] = anon_sym_DOLLAR;
	v->a[53837] = actions(1985);
	v->a[53838] = 5;
	v->a[53839] = aux_sym_concatenation_token1;
	small_parse_table_2692(v);
}

void	small_parse_table_2692(t_small_parse_table_array *v)
{
	v->a[53840] = sym_raw_string;
	v->a[53841] = sym_number;
	v->a[53842] = sym__comment_word;
	v->a[53843] = sym_word;
	v->a[53844] = state(496);
	v->a[53845] = 5;
	v->a[53846] = sym_arithmetic_expansion;
	v->a[53847] = sym_string;
	v->a[53848] = sym_simple_expansion;
	v->a[53849] = sym_expansion;
	v->a[53850] = sym_command_substitution;
	v->a[53851] = 5;
	v->a[53852] = actions(3);
	v->a[53853] = 1;
	v->a[53854] = sym_comment;
	v->a[53855] = actions(1916);
	v->a[53856] = 1;
	v->a[53857] = aux_sym_heredoc_redirect_token1;
	v->a[53858] = actions(2047);
	v->a[53859] = 1;
	small_parse_table_2693(v);
}

void	small_parse_table_2693(t_small_parse_table_array *v)
{
	v->a[53860] = anon_sym_PIPE;
	v->a[53861] = state(1076);
	v->a[53862] = 1;
	v->a[53863] = aux_sym_pipeline_repeat1;
	v->a[53864] = actions(1914);
	v->a[53865] = 14;
	v->a[53866] = anon_sym_esac;
	v->a[53867] = anon_sym_SEMI_SEMI;
	v->a[53868] = anon_sym_AMP_AMP;
	v->a[53869] = anon_sym_PIPE_PIPE;
	v->a[53870] = anon_sym_LT;
	v->a[53871] = anon_sym_GT;
	v->a[53872] = anon_sym_GT_GT;
	v->a[53873] = anon_sym_LT_AMP;
	v->a[53874] = anon_sym_GT_AMP;
	v->a[53875] = anon_sym_GT_PIPE;
	v->a[53876] = anon_sym_LT_GT;
	v->a[53877] = anon_sym_LT_LT;
	v->a[53878] = anon_sym_LT_LT_DASH;
	v->a[53879] = anon_sym_SEMI;
	small_parse_table_2694(v);
}

void	small_parse_table_2694(t_small_parse_table_array *v)
{
	v->a[53880] = 10;
	v->a[53881] = actions(3);
	v->a[53882] = 1;
	v->a[53883] = sym_comment;
	v->a[53884] = actions(872);
	v->a[53885] = 1;
	v->a[53886] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53887] = actions(876);
	v->a[53888] = 1;
	v->a[53889] = anon_sym_DQUOTE;
	v->a[53890] = actions(878);
	v->a[53891] = 1;
	v->a[53892] = anon_sym_DOLLAR_LBRACE;
	v->a[53893] = actions(880);
	v->a[53894] = 1;
	v->a[53895] = anon_sym_DOLLAR_LPAREN;
	v->a[53896] = actions(882);
	v->a[53897] = 1;
	v->a[53898] = anon_sym_BQUOTE;
	v->a[53899] = actions(2051);
	small_parse_table_2695(v);
}

/* EOF small_parse_table_538.c */

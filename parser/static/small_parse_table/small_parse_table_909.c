/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_909.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4545(t_small_parse_table_array *v)
{
	v->a[90900] = 1;
	v->a[90901] = aux_sym_string_repeat1;
	v->a[90902] = state(1963);
	v->a[90903] = 4;
	v->a[90904] = sym_arithmetic_expansion;
	v->a[90905] = sym_simple_expansion;
	v->a[90906] = sym_expansion;
	v->a[90907] = sym_command_substitution;
	v->a[90908] = 10;
	v->a[90909] = actions(3);
	v->a[90910] = 1;
	v->a[90911] = sym_comment;
	v->a[90912] = actions(3414);
	v->a[90913] = 1;
	v->a[90914] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90915] = actions(3420);
	v->a[90916] = 1;
	v->a[90917] = sym_string_content;
	v->a[90918] = actions(3422);
	v->a[90919] = 1;
	small_parse_table_4546(v);
}

void	small_parse_table_4546(t_small_parse_table_array *v)
{
	v->a[90920] = anon_sym_DOLLAR_LBRACE;
	v->a[90921] = actions(3424);
	v->a[90922] = 1;
	v->a[90923] = anon_sym_DOLLAR_LPAREN;
	v->a[90924] = actions(3426);
	v->a[90925] = 1;
	v->a[90926] = anon_sym_BQUOTE;
	v->a[90927] = actions(3706);
	v->a[90928] = 1;
	v->a[90929] = anon_sym_DOLLAR;
	v->a[90930] = actions(3708);
	v->a[90931] = 1;
	v->a[90932] = anon_sym_DQUOTE;
	v->a[90933] = state(1863);
	v->a[90934] = 1;
	v->a[90935] = aux_sym_string_repeat1;
	v->a[90936] = state(1963);
	v->a[90937] = 4;
	v->a[90938] = sym_arithmetic_expansion;
	v->a[90939] = sym_simple_expansion;
	small_parse_table_4547(v);
}

void	small_parse_table_4547(t_small_parse_table_array *v)
{
	v->a[90940] = sym_expansion;
	v->a[90941] = sym_command_substitution;
	v->a[90942] = 4;
	v->a[90943] = actions(3);
	v->a[90944] = 1;
	v->a[90945] = sym_comment;
	v->a[90946] = actions(405);
	v->a[90947] = 1;
	v->a[90948] = sym_variable_name;
	v->a[90949] = actions(403);
	v->a[90950] = 2;
	v->a[90951] = aux_sym__simple_variable_name_token1;
	v->a[90952] = aux_sym__multiline_variable_name_token1;
	v->a[90953] = actions(401);
	v->a[90954] = 9;
	v->a[90955] = anon_sym_BANG;
	v->a[90956] = anon_sym_DASH;
	v->a[90957] = anon_sym_STAR;
	v->a[90958] = anon_sym_QMARK;
	v->a[90959] = anon_sym_DOLLAR;
	small_parse_table_4548(v);
}

void	small_parse_table_4548(t_small_parse_table_array *v)
{
	v->a[90960] = anon_sym_POUND;
	v->a[90961] = anon_sym_AT;
	v->a[90962] = anon_sym_0;
	v->a[90963] = anon_sym__;
	v->a[90964] = 6;
	v->a[90965] = actions(1074);
	v->a[90966] = 1;
	v->a[90967] = sym_comment;
	v->a[90968] = actions(3716);
	v->a[90969] = 1;
	v->a[90970] = anon_sym_LT_LT;
	v->a[90971] = actions(3718);
	v->a[90972] = 1;
	v->a[90973] = anon_sym_LT_LT_DASH;
	v->a[90974] = actions(3714);
	v->a[90975] = 2;
	v->a[90976] = anon_sym_LT_AMP_DASH;
	v->a[90977] = anon_sym_GT_AMP_DASH;
	v->a[90978] = actions(3712);
	v->a[90979] = 3;
	small_parse_table_4549(v);
}

void	small_parse_table_4549(t_small_parse_table_array *v)
{
	v->a[90980] = anon_sym_GT_GT;
	v->a[90981] = anon_sym_AMP_GT_GT;
	v->a[90982] = anon_sym_GT_PIPE;
	v->a[90983] = actions(3710);
	v->a[90984] = 5;
	v->a[90985] = anon_sym_LT;
	v->a[90986] = anon_sym_GT;
	v->a[90987] = anon_sym_AMP_GT;
	v->a[90988] = anon_sym_LT_AMP;
	v->a[90989] = anon_sym_GT_AMP;
	v->a[90990] = 4;
	v->a[90991] = actions(3);
	v->a[90992] = 1;
	v->a[90993] = sym_comment;
	v->a[90994] = actions(3722);
	v->a[90995] = 1;
	v->a[90996] = anon_sym_esac;
	v->a[90997] = actions(3724);
	v->a[90998] = 1;
	v->a[90999] = sym_extglob_pattern;
	small_parse_table_4550(v);
}

/* EOF small_parse_table_909.c */

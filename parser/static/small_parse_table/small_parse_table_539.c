/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_539.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2695(t_small_parse_table_array *v)
{
	v->a[53900] = 1;
	v->a[53901] = sym_comment;
	v->a[53902] = actions(1979);
	v->a[53903] = 1;
	v->a[53904] = anon_sym_LPAREN;
	v->a[53905] = actions(1981);
	v->a[53906] = 1;
	v->a[53907] = anon_sym_BANG;
	v->a[53908] = actions(1989);
	v->a[53909] = 1;
	v->a[53910] = anon_sym_TILDE;
	v->a[53911] = actions(1991);
	v->a[53912] = 1;
	v->a[53913] = anon_sym_DOLLAR;
	v->a[53914] = actions(1993);
	v->a[53915] = 1;
	v->a[53916] = anon_sym_DQUOTE;
	v->a[53917] = actions(1995);
	v->a[53918] = 1;
	v->a[53919] = aux_sym_number_token1;
	small_parse_table_2696(v);
}

void	small_parse_table_2696(t_small_parse_table_array *v)
{
	v->a[53920] = actions(1997);
	v->a[53921] = 1;
	v->a[53922] = aux_sym_number_token2;
	v->a[53923] = actions(1999);
	v->a[53924] = 1;
	v->a[53925] = anon_sym_DOLLAR_LBRACE;
	v->a[53926] = actions(2001);
	v->a[53927] = 1;
	v->a[53928] = anon_sym_DOLLAR_LPAREN;
	v->a[53929] = actions(2003);
	v->a[53930] = 1;
	v->a[53931] = anon_sym_BQUOTE;
	v->a[53932] = actions(2005);
	v->a[53933] = 1;
	v->a[53934] = aux_sym__simple_variable_name_token1;
	v->a[53935] = actions(2007);
	v->a[53936] = 1;
	v->a[53937] = sym_variable_name;
	v->a[53938] = actions(2011);
	v->a[53939] = 1;
	small_parse_table_2697(v);
}

void	small_parse_table_2697(t_small_parse_table_array *v)
{
	v->a[53940] = anon_sym_RPAREN_RPAREN;
	v->a[53941] = actions(1985);
	v->a[53942] = 2;
	v->a[53943] = anon_sym_PLUS_PLUS;
	v->a[53944] = anon_sym_DASH_DASH;
	v->a[53945] = actions(1987);
	v->a[53946] = 2;
	v->a[53947] = anon_sym_DASH2;
	v->a[53948] = anon_sym_PLUS2;
	v->a[53949] = state(530);
	v->a[53950] = 4;
	v->a[53951] = sym_string;
	v->a[53952] = sym_number;
	v->a[53953] = sym_simple_expansion;
	v->a[53954] = sym_expansion;
	v->a[53955] = state(675);
	v->a[53956] = 8;
	v->a[53957] = sym__arithmetic_expression;
	v->a[53958] = sym_arithmetic_literal;
	v->a[53959] = sym_arithmetic_binary_expression;
	small_parse_table_2698(v);
}

void	small_parse_table_2698(t_small_parse_table_array *v)
{
	v->a[53960] = sym_arithmetic_ternary_expression;
	v->a[53961] = sym_arithmetic_unary_expression;
	v->a[53962] = sym_arithmetic_postfix_expression;
	v->a[53963] = sym_arithmetic_parenthesized_expression;
	v->a[53964] = sym_command_substitution;
	v->a[53965] = 18;
	v->a[53966] = actions(1404);
	v->a[53967] = 1;
	v->a[53968] = sym_comment;
	v->a[53969] = actions(1979);
	v->a[53970] = 1;
	v->a[53971] = anon_sym_LPAREN;
	v->a[53972] = actions(1981);
	v->a[53973] = 1;
	v->a[53974] = anon_sym_BANG;
	v->a[53975] = actions(1989);
	v->a[53976] = 1;
	v->a[53977] = anon_sym_TILDE;
	v->a[53978] = actions(1991);
	v->a[53979] = 1;
	small_parse_table_2699(v);
}

void	small_parse_table_2699(t_small_parse_table_array *v)
{
	v->a[53980] = anon_sym_DOLLAR;
	v->a[53981] = actions(1993);
	v->a[53982] = 1;
	v->a[53983] = anon_sym_DQUOTE;
	v->a[53984] = actions(1995);
	v->a[53985] = 1;
	v->a[53986] = aux_sym_number_token1;
	v->a[53987] = actions(1997);
	v->a[53988] = 1;
	v->a[53989] = aux_sym_number_token2;
	v->a[53990] = actions(1999);
	v->a[53991] = 1;
	v->a[53992] = anon_sym_DOLLAR_LBRACE;
	v->a[53993] = actions(2001);
	v->a[53994] = 1;
	v->a[53995] = anon_sym_DOLLAR_LPAREN;
	v->a[53996] = actions(2003);
	v->a[53997] = 1;
	v->a[53998] = anon_sym_BQUOTE;
	v->a[53999] = actions(2005);
	small_parse_table_2700(v);
}

/* EOF small_parse_table_539.c */
